/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarafan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:02:39 by asarafan          #+#    #+#             */
/*   Updated: 2019/02/28 10:29:03 by asarafan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src,
		size_t dstsize)
{
	char	*s;
	size_t	i;
	size_t	dlen;
	size_t	slen;

	s = (char *)src;
	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (dstsize <= dlen)
		return (slen + dstsize);
	while ((dest[i] != '\0') && i < (dstsize - 1))
		i++;
	while (*src && i < (dstsize - 1))
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dlen + slen);
}
