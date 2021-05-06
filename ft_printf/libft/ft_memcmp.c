/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:31:31 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/16 16:02:41 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*a == *b && n-- > 0)
	{
		a++;
		b++;
		if (n == 0)
			return (0);
	}
	if (*a != *b)
	{
		return (*a - *b);
	}
	return (0);
}
