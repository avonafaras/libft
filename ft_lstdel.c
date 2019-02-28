/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarafan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 22:05:06 by asarafan          #+#    #+#             */
/*   Updated: 2019/02/27 19:22:23 by asarafan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	if ((*alst))
	{
		while ((*alst) && alst)
		{
			temp = (*alst)->next;
			(*del)((*alst)->content, (*alst)->content_size);
			ft_memdel((void **)alst);
			(*alst) = temp;
		}
	}
	(*alst) = NULL;
}
