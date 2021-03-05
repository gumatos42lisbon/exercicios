/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <gumatos@42lisboa.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:13:24 by gumatos           #+#    #+#             */
/*   Updated: 2021/03/02 14:12:21 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_1(char c, char const *set)
{
	size_t	a;

	a = 0;
	while (set[a])
	{
		if (set[a] == c)
			return (1);
		a++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_1(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_1(s1[end - 1], set))
		end--;
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	a = 0;
	while (start < end)
	{
		str[a++] = s1[start++];
	}
	str[a] = 0;
	return (str);
}
