/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_unit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:54:35 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/16 16:20:26 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_put_part_unit(char *unit_int, t_flags flags)
{
	int	contador;

	contador = 0;
	if (flags.ponto >= 0)
		contador += ft_treat_largura(flags.ponto - 1,
				ft_strlen(unit_int) - 1, 1);
	contador += ft_putstrprec(unit_int, ft_strlen(unit_int));
	return (contador);
}

static int	ft_put_unit(char *unit_int, t_flags flags)
{
	int	contador;

	contador = 0;
	if (flags.negativo == 1)
		contador += ft_in_put_part_unit(unit_int, flags);
	if (flags.ponto >= 0 && (size_t)flags.ponto < ft_strlen(unit_int))
		flags.ponto = ft_strlen(unit_int);
	if (flags.ponto >= 0)
	{
		flags.largura -= flags.ponto;
		contador += ft_treat_largura(flags.largura, 0, 0);
	}
	else
		contador += ft_treat_largura(flags.largura,
				ft_strlen(unit_int), flags.zero);
	if (flags.negativo == 0)
		contador += ft_in_put_part_unit(unit_int, flags);
	return (contador);
}

int	ft_treat_unit(unsigned int unit, t_flags flags)
{
	char	*unit_int;
	int		contador;

	contador = 0;
	unit = (unsigned int)(4294967295 + 1 + unit);
	if (flags.ponto == 0 && unit == 0)
	{
		contador += ft_treat_largura(flags.largura, 0, 0);
		return (contador);
	}
	unit_int = ft_u_itoa(unit);
	contador += ft_put_unit(unit_int, flags);
	free(unit_int);
	return (contador);
}
