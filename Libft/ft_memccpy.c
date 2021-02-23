/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:38:11 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/16 15:19:44 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	if (!dest || !src)
	{
		return (NULL);
	}
	while (n-- > 0)
	{
		*b = *a;
		if (*a == (unsigned char)c)
			return ((void*)b + 1);
		a++;
		b++;
	}
}
