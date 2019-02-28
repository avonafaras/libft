/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarafan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:04:07 by asarafan          #+#    #+#             */
/*   Updated: 2019/02/26 22:39:10 by asarafan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s1[i] && (i < len))
	{
		while ((s1[i + j] == s2[j]) && s2[j] && ((i + j) < len))
			j += 1;
		if (!s2[j])
			return ((char *)&s1[i]);
		j = 0;
		i += 1;
	}
	if (!s2[0])
		return ((char *)&s1[i]);
	return (0);
}
