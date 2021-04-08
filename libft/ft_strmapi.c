/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <gumatos@42lisboa.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 16:41:23 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/07 13:34:54 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
