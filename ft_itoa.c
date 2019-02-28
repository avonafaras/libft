/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarafan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 11:53:57 by asarafan          #+#    #+#             */
/*   Updated: 2019/02/23 12:51:54 by asarafan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*fresh;
	int				size;
	unsigned int	j;

	size = (n <= 0) ? 1 : 0;
	j = (n < 0) ? (-1 * n) : n;
	while (j)
	{
		j /= 10;
		size++;
	}
	fresh = (char *)malloc(sizeof(char) * (size + 1));
	if (!fresh)
		return (NULL);
	j = (n < 0) ? (-1 * n) : n;
	fresh[size] = '\0';
	while (size)
	{
		fresh[--size] = j % 10 + '0';
		j /= 10;
	}
	if (n < 0)
		fresh[size] = '-';
	return (fresh);
}
