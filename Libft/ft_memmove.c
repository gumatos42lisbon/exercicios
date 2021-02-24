/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:20:28 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/24 17:58:19 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		while (n--)
		{
			b[n] = a[n];
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			b[n] = a[n];
		}
	}
	return (dest);
}
