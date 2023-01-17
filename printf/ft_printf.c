/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:04:57 by bsantann          #+#    #+#             */
/*   Updated: 2022/07/28 00:39:36 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_arg(const char *fmt, int i, va_list ap)
{
	if (fmt[i + 1] == 37)
		return (ft_putchar(fmt[i + 1], 1));
	else if (fmt[i + 1] == 99)
		return (ft_putchar(va_arg(ap, int), 1));
	else if (fmt[i + 1] == 115)
		return (ft_putstr(va_arg(ap, char *), 1));
	else if (fmt[i + 1] == 100 || fmt[i + 1] == 105)
		return (ft_putnbr(va_arg(ap, int), 10, 1, 1));
	else if (fmt[i + 1] == 117)
		return (ft_putunbr(va_arg(ap, unsigned int), 10, 1, 1));
	else if (fmt[i + 1] == 120)
		return (ft_putunbr(va_arg(ap, unsigned int), 16, 1, 1));
	else if (fmt[i + 1] == 88)
		return (ft_putunbr(va_arg(ap, unsigned int), 16, 1, 0));
	else if (fmt[i + 1] == 112)
		return (ft_putaddr(va_arg(ap, unsigned long), 1));
	return (1);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == 37 && ft_strchr("cspdiuxX%", fmt[i + 1]))
		{
			ret += ft_printf_arg(fmt, i, ap);
			i++;
		}
		else
			ret += ft_putchar(fmt[i], 1);
		i++;
	}
	va_end(ap);
	return (ret);
}
