/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:58:59 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/06 18:06:25 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_in_put_part_hexa(char *hexa, t_flags flags)
{
	int contador;

	contador = 0;
	if (flags.ponto >= 0)
		contador += ft_treat_largura(flags.ponto - 1, ft_strlen(hexa) - 1, 1);
	contador += ft_putstrprec(hexa, ft_strlen(hexa));
	return (contador);
}

static int		ft_put_part_hexa(char *hexa, t_flags flags)
{
	int contador;

	contador = 0;
	if (flags.negativo == 1)
		contador += ft_in_put_part_hexa(hexa, flags);
	if (flags.ponto >= 0 && (size_t)flags.ponto < ft_strlen(hexa))
		flags.ponto = ft_strlen(hexa);
	if (flags.ponto >= 0)
	{
		flags.largura -= flags.ponto;
		contador += ft_treat_largura(flags.largura, 0, 0);
	}
	else
		contador += ft_treat_largura(flags.largura,
		ft_strlen(hexa), flags.zero);
	if (flags.negativo == 0)
		contador += ft_in_put_part_hexa(hexa, flags);
	return (contador);
}

int				ft_treat_hexa(unsigned int ui, int lower, t_flags flags)
{
	char	*hexa;
	int		contador;

	contador = 0;
	ui = (unsigned int)(4294967295 + 1
				+ ui);
	if (flags.ponto == 0 && ui == 0)
	{
		contador += ft_treat_largura(flags.largura, 0, 0);
		return (contador);
	}
	hexa = ft_ull_base((unsigned long long)ui, 16);
	if (lower == 1)
		hexa = ft_str_tolower(hexa);
	contador += ft_put_part_hexa(hexa, flags);
	free(hexa);
	return (contador);
}
