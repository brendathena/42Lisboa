/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:57:25 by bsantann          #+#    #+#             */
/*   Updated: 2021/11/16 20:42:32 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*a;

	a = dst;
	if (!dst && !src)
		return (0);
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (a);
}
