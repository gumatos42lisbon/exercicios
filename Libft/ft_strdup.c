/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 00:22:14 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/24 18:14:05 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
