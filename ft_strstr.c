/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarafan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:19:53 by asarafan          #+#    #+#             */
/*   Updated: 2019/02/26 22:07:32 by asarafan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const char	*s;
	const char	*p;

	if (*s1 == *s2 && *s1 == '\0')
		return ((char *)s1);
	while (*s1)
	{
		s = s1;
		p = s2;
		while (*p && *s1 && *p == *s1)
		{
			p++;
			s1++;
		}
		if (!*p)
			return ((char *)s);
		s1 = s + 1;
	}
	return (NULL);
}
