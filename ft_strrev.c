/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarafan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 15:06:57 by asarafan          #+#    #+#             */
/*   Updated: 2019/02/27 15:26:32 by asarafan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *str)
{
	char	s1;
	char	*s2;

	s2 = str + ft_strlen(str) - 1;
	while (str < s2)
	{
		s1 = *str;
		*str++ = *s2;
		*s2-- = s1;
	}
}
