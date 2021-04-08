/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 12:09:46 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/07 14:50:11 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_put_part_int(char *str, t_flags flags)
{
	int	contador;

	contador = 0;
	if (flags.ponto >= 0)
	{
		contador += ft_treat_largura(flags.ponto, ft_strlen(str), 0);
		contador += ft_putstrprec(str, flags.ponto);
	}
	else
		contador += ft_putstrprec(str, ft_strlen(str));
	return (contador);
}

int			ft_treat_string(char *str, t_flags flags)
{
	int	contador;

	contador = 0;
	if (!str)
		str = "(null)";
	if (flags.ponto >= 0 && (size_t)flags.ponto > ft_strlen(str))
		flags.ponto = ft_strlen(str);
	if (flags.negativo == 1)
		contador += ft_put_part_int(str, flags);
	if (flags.ponto >= 0)
		contador += ft_treat_largura(flags.largura, flags.ponto, 0);
	else
		contador += ft_treat_largura(flags.largura, ft_strlen(str), 0);
	if (flags.negativo == 0)
		contador += ft_put_part_int(str, flags);
	return (contador);
}
