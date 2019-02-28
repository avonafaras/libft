/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarafan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:38:06 by asarafan          #+#    #+#             */
/*   Updated: 2019/02/28 11:00:19 by asarafan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_words_count(char const *str, char c)
{
	int			count;

	count = 0;
	while (*str)
	{
		if (*str != c && (*(str + 1) == c || *(str + 1) == '\0'))
			count++;
		str++;
	}
	return (count);
}

static int		ft_strlength(char const *str, char c)
{
	int			len;

	if (!str || !c)
		return (0);
	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**fresh;
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;

	if (!s || !c)
		return (NULL);
	count = ft_words_count(s, c);
	fresh = (char **)malloc(sizeof(char *) * (count + 1));
	if (!fresh)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s && *s == c)
			s++;
		fresh[i] = (char *)malloc(sizeof(char) * (ft_strlength(s, c) + 1));
		j = 0;
		while (*s && *s != c)
			fresh[i][j++] = *s++;
		fresh[i][j] = '\0';
		i++;
	}
	fresh[i] = 0;
	return (fresh);
}
