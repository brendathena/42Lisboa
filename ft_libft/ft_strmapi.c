/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:59:51 by bsantann          #+#    #+#             */
/*   Updated: 2021/11/30 22:32:51 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		j;
	char	*ptr;

	if (!s || !f)
		return (0);
	ptr = malloc(sizeof(*ptr) * (ft_strlen(s) + 1));
	if (!ptr)
		return (0);
	j = 0;
	while (s[j])
	{
		ptr[j] = f(j, s[j]);
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}
