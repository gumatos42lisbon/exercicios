/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 10:43:44 by gumatos           #+#    #+#             */
/*   Updated: 2021/03/02 14:10:43 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
