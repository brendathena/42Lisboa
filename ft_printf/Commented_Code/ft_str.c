/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:05:42 by bsantann          #+#    #+#             */
/*   Updated: 2022/07/27 12:05:43 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_strcpy(char *dst, const char *src, size_t n)
{
	if (dst && src)
		while (n--)
			*dst++ = *src++;
}

char	*ft_strchr(const char *s, int c)
{
	if (*s == (char)c)
		return ((char *)s);
	while (*s++)
		if (*s == (char)c)
			return ((char *)s);
	return (0);	
}

size_t ft_strlen(const char *s)
{
	size_t i;
	i = 0;
	
	while (s[i])
		i++;
	return (i);
}
