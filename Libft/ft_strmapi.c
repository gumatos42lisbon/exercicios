/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <gumatos@42lisboa.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 16:41:23 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/24 18:14:47 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *dest;
	char *clean;

	dest = malloc(size);
	clean = dest;
	if (dest)
	{
		while (size != 0)
		{
			*clean++ = 0;
			size--;
		}
		return (dest);
	}
	else
	{
		return (NULL);
	}
}

char	*ft_strnew(size_t size)
{
	return (ft_memalloc(size + 1));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*a;
	unsigned	b;

	b = 0;
	if (f && s)
	{
		a = ft_strnew(ft_strlen(s));
		if (!a)
			return (NULL);
		while (s[b] != 0)
		{
			a[b] = f(b, s[b]);
			b++;
		}
		return (a);
	}
	return (NULL);
}
