/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:20:28 by gumatos           #+#    #+#             */
/*   Updated: 2021/03/02 16:13:28 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	if (b > a)
	{
		while (n--)
		{
			*(b + n) = *(a + n);
		}
		return (dest);
	}
	while (n--)
		*b++ = *a++;
	return (dest);
}
