/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarafan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 21:21:17 by asarafan          #+#    #+#             */
/*   Updated: 2019/02/28 10:24:38 by asarafan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		n;
	int		s;

	n = 0;
	s = 1;
	while (*str == ' ' || *str == '\n' || *str == '\r' || *str == '\t'
					|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '-')
	{
		s = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n * s);
}
