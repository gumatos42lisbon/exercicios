/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <gumatos@42lisboa.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:55:53 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/24 19:17:38 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *src, size_t len)
{
	char *final;

	final = dest;
	while (*src != 0 && len > 0)
	{
		*dest++ = *src++;
		len--;
	}
	while (len > 0)
	{
		*dest++ = 0;
		len--;
	}
	return (final);
}

static int	ft_list(char const *s, char c)
{
	int a;

	a = 0;
	if (*s != c && *s != 0)
	{
		a++;
		s++;
	}
	while (*s != 0)
	{
		if (*s != c && s[-1] == c)
			a++;
		s++;
	}
	return (a + 1);
}

char		**ft_split(char const *s, char c)
{
	unsigned int		a;
	unsigned int		b;
	char				**list;

	if (s == NULL)
		return (NULL);
	list = (char**)malloc(sizeof(char*) * ft_list(s, c));
	if (!list)
		return (NULL);
	b = 0;
	while (*s != 0)
	{
		a = 0;
		while (s[a] != c && s[a] != 0)
			a++;
		if (a)
		{
			list[b++] = ft_strncpy(ft_strnew(a), s, a);
			s = &s[a];
		}
		else
			s++;
	}
	list[b] = NULL;
	return (list);
}
