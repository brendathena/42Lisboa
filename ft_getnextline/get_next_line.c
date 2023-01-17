/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 05:47:13 by bsantann          #+#    #+#             */
/*   Updated: 2022/08/22 05:47:15 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buff[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*s;
	char		*str_temp;
	int			read_fd;
	int			linebreak_len;

	if ((fd < 0 || fd >= FOPEN_MAX) || BUFFER_SIZE <= 0)
		return (NULL);
	read_fd = 1;
	linebreak_len = -1;
	s = 0;
	while (read_fd > 0 && linebreak_len < 0)
	{
		if (buff[fd][0] == 0)
			read_fd = read(fd, buff[fd], BUFFER_SIZE);
		linebreak_len = linebreak_buff(buff[fd]);
		if (read_fd > 0)
		{
			str_temp = s;
			s = cat_lenstr_buff(str_temp, buff[fd]);
		}
		newbuff(buff[fd]);
	}
	return (s);
}