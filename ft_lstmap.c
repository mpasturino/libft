/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpasturi <mpasturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 19:28:45 by mpasturi          #+#    #+#             */
/*   Updated: 2020/02/29 19:39:38 by mpasturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*first;

	if (lst == NULL)
		return (NULL);
	res = ft_lstnew(f(lst->content));
	if (res == NULL)
		return (NULL);
	first = res;
	while (lst->next != NULL)
	{
		res->next = ft_lstnew((*f)(lst->next->content));
		if (res->next == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		res = res->next;
		lst = lst->next;
	}
	return (first);
}
