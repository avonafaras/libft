/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarafan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 18:56:32 by asarafan          #+#    #+#             */
/*   Updated: 2019/02/26 23:15:21 by asarafan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char *s2;

	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	while ((*s1 || *s2) && n)
	{
		if ((*s1 > *s2) || (*s1 < *s2))
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
