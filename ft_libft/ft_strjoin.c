/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 20:21:32 by bsantann          #+#    #+#             */
/*   Updated: 2021/11/21 20:53:19 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (!s1)
		return (0);
	ptr = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (!ptr)
		return (0);
	while (s1 && b < ft_strlen(s1))
	{
		ptr[b] = s1[b];
		b++;
	}
	while (s2 && a < ft_strlen(s2))
	{
		ptr[b + a] = s2[a];
		a++;
	}
	return (ptr);
}
