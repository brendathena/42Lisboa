/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 22:09:18 by bsantann          #+#    #+#             */
/*   Updated: 2021/12/07 22:57:32 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*obj;

	if (!lst)
		return (0);
	res = 0;
	while (lst)
	{
		obj = ft_lstnew(f(lst -> content));
		if (!obj)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		ft_lstadd_back(&res, obj);
		lst = lst -> next;
	}
	return (res);
}
