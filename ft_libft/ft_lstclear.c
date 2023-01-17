/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:26:21 by bsantann          #+#    #+#             */
/*   Updated: 2021/12/07 23:00:17 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (lst || *lst)
	{
		while (*lst)
		{
			aux = (*lst)-> next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
		*lst = 0;
	}	
}
