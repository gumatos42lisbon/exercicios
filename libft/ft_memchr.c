/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:21:00 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/17 16:07:39 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *a;

	while (n-- > 0)
	{
		a = (unsigned char *)s;
		if (*a == (unsigned char)c)
		{
			return (a);
		}
		s++;
	}
	return (NULL);
}
