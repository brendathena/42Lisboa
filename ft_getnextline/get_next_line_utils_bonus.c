/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 05:48:35 by bsantann          #+#    #+#             */
/*   Updated: 2022/10/10 10:57:35 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	linebreak_len(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i] && s[i] != '\n')
		i++;
	return (i + (s && s[i] == '\n'));
}

int	linebreak_buff(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*cat_lenstr_buff(char *s, char *buff)
{
	size_t	i;
	size_t	s_len;
	size_t	buff_len;
	char	*dest;

	s_len = linebreak_len(s);
	buff_len = linebreak_len(buff);
	dest = malloc((s_len + buff_len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s && i < s_len)
	{
		dest[i] = s[i];
		i++;
	}
	while (i - s_len < buff_len)
	{
		dest[i] = buff[i - s_len];
		i++;
	}
	if (s)
		free(s);
	dest[i] = '\0';
	return (dest);
}

void	newbuff(char *buff)
{
	int		i;
	int		j;
	int		lb;

	i = 0;
	j = 0;
	lb = linebreak_buff(buff);
	while (buff[i])
	{
		if (i > lb)
			buff[j++] = buff[i];
		buff[i++] = '\0';
	}
}
