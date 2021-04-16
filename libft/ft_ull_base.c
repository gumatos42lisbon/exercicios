/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ull_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:16:59 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/16 16:25:28 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*treat_base(unsigned long long ull_save,
		int base, char *rtn, int contador)
{
	while (ull_save != 0)
	{
		if ((ull_save % base) < 10)
			rtn[contador - 1] = (ull_save % base) + 48;
		else
			rtn[contador - 1] = (ull_save % base) + 55;
		ull_save /= base;
		contador--;
	}
	return (rtn);
}

char	*ft_ull_base(unsigned long long ull, int base)
{
	char				*rtn;
	unsigned long long	ull_save;
	int					contador;

	rtn = 0;
	contador = 0;
	ull_save = ull;
	if (ull == 0)
		return (ft_strdup("0"));
	while (ull != 0)
	{
		ull /= base;
		contador++;
	}
	rtn = malloc(sizeof(char) * (contador + 1));
	if (!rtn)
		return (0);
	rtn[contador] = '\0';
	rtn = treat_base(ull_save, base, rtn, contador);
	return (rtn);
}
