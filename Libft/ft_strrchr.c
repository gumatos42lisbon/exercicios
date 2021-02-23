/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:30:52 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/22 23:17:36 by gumatos          ###   ########.fr       */
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

char	*ft_strrchr(const char *str, int c)
{
	size_t n;

	n = (ft_strlen(str) - 1);
	while (str[n])
	{
		if (str[n] == c)
		{
			return ((char*)str + n);
		}
		n--;
	}
	return (0);
}
