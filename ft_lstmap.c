/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarafan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 10:51:23 by asarafan          #+#    #+#             */
/*   Updated: 2019/02/27 00:19:22 by asarafan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*temp;

	if (!lst)
		return (NULL);
	first = f(lst);
	temp = first;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = f(lst);
		if (!(temp->next))
		{
			free(temp->next);
			return (NULL);
		}
		temp = temp->next;
	}
	return (first);
}
