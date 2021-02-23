/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:08:07 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/22 16:39:03 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (dest[a] && a < n)
	{
		a++;
	}
	while (src[b] && (a + b + 1) < n)
	{
		dest[a + b] = src[b];
		b++;
	}
	if (a < n)
		dest[a + b] = 0;
	return (a + ft_strlen(src));
}
