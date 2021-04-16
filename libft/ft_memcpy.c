/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:30:46 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/16 16:03:21 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	if (!dest && !src)
		return (NULL);
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	while (n--)
	{
		a[n] = b[n];
	}
	return (dest);
}
