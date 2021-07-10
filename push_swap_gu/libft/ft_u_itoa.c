/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:12:45 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/16 16:23:26 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_contadordigitos(long n)
{
	int	a;

	a = 0;
	while (n >= 1)
	{
		n /= 10;
		a++;
	}
	return (a);
}

char	*ft_itoa_gu(char *str, long nbr, int a)
{
	if (nbr != 0)
		str = malloc(sizeof(char) * (a + 1));
	else
		return (str = ft_strdup("0"));
	if (!str)
		return (0);
	str[a] = '\0';
	while (--a >= 0)
	{
		str[a] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

char	*ft_u_itoa(unsigned int n)
{
	int		a;
	char	*str;
	long	nbr;

	nbr = n;
	a = ft_contadordigitos(nbr);
	str = 0;
	str = ft_itoa_gu(str, nbr, a);
	if (!str)
		return (0);
	return (str);
}
