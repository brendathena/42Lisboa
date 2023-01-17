/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:48:13 by bsantann          #+#    #+#             */
/*   Updated: 2021/11/25 22:05:25 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_size(char const *s, char c)
{
	int	fl;
	int	words;

	fl = 0;
	words = 0;
	while (*s)
	{
		if (*s != c && !fl)
		{
			words++;
			fl = 1;
		}
		if (*s == c)
			fl = 0;
		s++;
	}
	return (words);
}

char	*get_word(char const *s, char c, int a)
{
	int		z;

	z = a;
	while (s[a] && s[a] != c)
		a++;
	return (ft_substr(s, z, (a - z)));
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	a;
	size_t	b;

	if (!s)
		return (0);
	array = malloc(get_size(s, c) * sizeof(char *));
	if (!array)
		return (0);
	a = 0;
	b = 0;
	while (s[a])
	{
		if (s[a] != c)
		{
			array[b] = get_word(s, c, a);
			a = a + ft_strlen(array[b]) - 1;
			b++;
		}
		a++;
	}
	array[b] = 0;
	return (array);
}
