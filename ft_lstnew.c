/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarafan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 22:08:00 by asarafan          #+#    #+#             */
/*   Updated: 2019/02/27 00:21:00 by asarafan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*fresh;

	fresh = (t_list *)malloc(sizeof(t_list));
	if (!fresh)
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		fresh->content = NULL;
		fresh->content_size = 0;
		fresh->next = NULL;
	}
	else
	{
		fresh->content = ft_memalloc(content_size);
		fresh->content = ft_memcpy(fresh->content, content, content_size);
		fresh->content_size = content_size;
		fresh->next = NULL;
	}
	return (fresh);
}
