/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:59:03 by bsantann          #+#    #+#             */
/*   Updated: 2021/12/07 21:50:03 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length(int a)
{
	if (a < 0 && a > -10)
		return (2);
	if (!a)
		return (0);
	return (1 + length(a /= 10));
}

char	*ft_itoa(int n)
{
	int		size;
	char	*ptr;

	if (!n)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = length(n);
	ptr = malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (0);
	if (n < 0)
	{
		ptr[0] = 45;
		n = -n;
	}
	ptr[size] = 0;
	while (n > 0)
	{
		ptr[size-- - 1] = ((n % 10) + 48);
		n /= 10;
	}
	return (ptr);
}
