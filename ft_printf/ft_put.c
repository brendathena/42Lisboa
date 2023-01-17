/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:05:34 by bsantann          #+#    #+#             */
/*   Updated: 2022/07/28 00:42:38 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_putstr(char *str, int fd)
{
	int	len;

	if (!str)
		return (write(fd, "(null)", 6));
	len = ft_strlen(str);
	write (1, str, len);
	return (len);
}

int	ft_putnbr(int nb, size_t len, int fd, int type)
{
	if (nb == -2147483648)
		return (write(fd, "-2147483648", 11));
	if (nb < 0)
		return (write(fd, "-", 1) + ft_putnbr(-nb, len, fd, type));
	len = (nb % 10) + '0';
	if (nb > 9)
		return (ft_putnbr(nb / 10, len, fd, type) + write(fd, &len, 1));
	return (write(fd, &len, 1));
}

int	ft_putunbr(size_t nb, size_t len, int fd, int type)
{
	static int	i;
	char		base[17];

	i = 0;
	if (len == 16)
	{
		if (type == 1)
			ft_strcpy(base, "0123456789abcdef", 16);
		else
			ft_strcpy(base, "0123456789ABCDEF", 16);
	}
	else
		ft_strcpy(base, "0123456789", 10);
	if (nb < len)
		i += ft_putchar(base[nb], 1);
	else
	{
		ft_putunbr(nb / len, len, fd, type);
		nb = nb % len;
		i += ft_putchar(base[nb], 1);
	}
	return (i);
}

int	ft_putaddr(unsigned long addr, int fd)
{
	if (!addr)
		return (write(fd, "(nil)", 5));
	return (write(fd, "0x", 2) + ft_putunbr(addr, 16, fd, 1));
}
