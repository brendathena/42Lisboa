/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 00:10:38 by bsantann          #+#    #+#             */
/*   Updated: 2021/11/19 22:56:00 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = ft_strlen(dst);
	b = 0;
	if (size < a)
		return (size + ft_strlen(src));
	while (src[b] && a < (size - 1))
		dst[a++] = src[b++];
	dst[a] = 0;
	return (ft_strlen(dst) + ft_strlen(&src[b]));
}
