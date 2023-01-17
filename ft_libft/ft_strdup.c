/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:15:20 by bsantann          #+#    #+#             */
/*   Updated: 2021/11/21 18:51:28 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		j;

	j = 0;
	ptr = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (s1[j])
	{
		ptr[j] = s1[j];
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}
