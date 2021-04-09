/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <gumatos@42lisboa.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:17:09 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/09 14:06:27 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_1(int n)
{
	int a;

	a = 0;
	if (n < 0)
		a++;
	if (n == 0)
		a = 1;
	while (n)
	{
		a++;
		n /= 10;
	}
	return (a);
}

char		*ft_itoa(int n)
{
	char	*str;
	size_t	a;

	a = ft_1(n);
	str = ft_strnew(a);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[a-- - 1] = '8';
			n /= 10;
		}
		n = -n;
	}
	while (n != 0 && a >= 0)
	{
		str[a-- - 1] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
