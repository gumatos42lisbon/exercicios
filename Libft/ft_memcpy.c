/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:30:46 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/18 23:03:42 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *a;
	char *b;

	a = (unsigned char*)dest;
	b = (unsigned char*)src;
	while (n--)
	{
		a[n] = b[n];
	}
	return (dest);
}
