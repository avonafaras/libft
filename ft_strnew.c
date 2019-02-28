/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarafan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 23:23:53 by asarafan          #+#    #+#             */
/*   Updated: 2019/02/26 23:22:19 by asarafan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;

	fresh = (char *)malloc(sizeof(char) * size + 1);
	if (!fresh)
		return (NULL);
	while (size)
	{
		fresh[size--] = '\0';
	}
	fresh[0] = '\0';
	return (fresh);
}
