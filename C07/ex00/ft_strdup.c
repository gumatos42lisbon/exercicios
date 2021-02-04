/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:32:07 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/04 18:45:06 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_contador(char *src)
{
	int a;

	a = 0;
	while (src[a])
	{
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		a;

	a = 0;
	det = malloc(ft_contador(src) + 1);
	if (!dest)
	{
		return (0);
	}
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
