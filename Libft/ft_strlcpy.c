/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:50:20 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/19 15:07:00 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, char *src, size_t n)
{
	size_t	a;

	a = 0;
	if (n > 0)
	{
		while (src[a] && a < (n - 1))
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = 0;
	}
	while (src[a])
		a++;
	return (a);
}
