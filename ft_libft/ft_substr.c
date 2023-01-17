/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:53:27 by bsantann          #+#    #+#             */
/*   Updated: 2021/11/23 22:38:35 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	a;

	a = 0;
	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (a < len && s && ft_strlen(s) > start)
		ptr[a++] = s[start++];
	ptr[a] = 0;
	return (ptr);
}
