/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:50:20 by gumatos           #+#    #+#             */
/*   Updated: 2021/03/02 14:14:56 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	a;

	if (!dest || !src)
		return (0);
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
