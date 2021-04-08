/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 23:20:51 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/23 16:16:24 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t a;
	size_t b;

	if (*little == '\0')
	{
		return ((char *)big);
	}
	a = 0;
	while (big[a] && a < n)
	{
		b = 0;
		while (big[a + b] && a + b < n && little[b] && big[a + b] == little[b])
			b++;
		if (little[b] == '\0')
			return ((char *)(big + a));
		a++;
	}
	return (NULL);
}
