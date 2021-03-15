/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:45:48 by gumatos           #+#    #+#             */
/*   Updated: 2021/03/12 15:58:21 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	size_t	b;
	size_t	c;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1) + ft_strlen(s2);
	b = 0;
	str = malloc(sizeof(char const) * (a + 1));
	if (!str)
		return (NULL);
	while (s1[b])
	{
		str[b] = s1[b];
		b++;
	}
	c = 0;
	while (s2[c])
	{
		str[b++] = s2[c++];
	}
	str[b] = 0;
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t a;

	a = 0;
	while (s[a])
	{
		a++;
	}
	return (a);
}

char	*ft_substr(const char *s, size_t start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	a = 0;
	b = 0;
	while (s[a])
	{
		if (a >= start && b < len)
		{
			str[b] = s[a];
			b++;
		}
		a++;
	}
	str[b] = 0;
	return (str);
}

char	*ft_strcpy(char *dest, const char *src)
{
	char *a;

	a = dest;
	while (*src != 0)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (a);
}

char	*ft_strdup(const char *s1)
{
	char *a;

	a = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (a)
		ft_strcpy(a, s1);
	return (a);
}
