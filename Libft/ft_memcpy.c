/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:30:46 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/24 17:57:40 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	a = (unsigned char*)dest;
	b = (unsigned char*)src;
	while (n--)
	{
		a[n] = b[n];
	}
	return (dest);
}
