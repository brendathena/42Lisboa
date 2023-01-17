/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 20:38:48 by bsantann          #+#    #+#             */
/*   Updated: 2021/11/23 22:47:59 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	middle(char const *s1, char const *set, int a, int b)
{
	while (b > 0 && s1[a] && ft_strchr(set, s1[a]))
		a++;
	while (b < 0 && a >= 0 && ft_strchr(set, s1[a]))
		a--;
	if (a < 0)
		return (0);
	else
		return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	l = 0;
	if (!s1 || !set)
		return (0);
	i = middle(s1, set, 0, 1);
	if (i == ft_strlen(s1))
		k = 0;
	else
	{
		j = middle(s1, set, (ft_strlen(s1) - 1), -1);
		k = (j - i) + 1;
	}
	ptr = malloc((k + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (l < k && s1)
		ptr[l++] = s1[i++];
	ptr[l] = 0;
	return (ptr);
}
