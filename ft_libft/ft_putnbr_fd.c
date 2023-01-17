/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:53:57 by bsantann          #+#    #+#             */
/*   Updated: 2021/12/02 22:52:32 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	j;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
			ft_putnbr_fd(n, fd);
		}
		else if (n < 10)
		{
			j = n + '0';
			write(fd, &j, 1);
		}
		else
		{
			ft_putnbr_fd(n / 10, fd);
			j = (n % 10) + '0';
			write(fd, &j, 1);
		}
	}
}
