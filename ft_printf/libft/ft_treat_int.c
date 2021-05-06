/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:59:24 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/16 16:17:03 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_flag_zero(t_flags flags)
{
	if (flags.estrela == 1 && flags.negativo == 1)
		return (0);
	else
		return (1);
}

static int	ft_in_put_part_int(char *a, int save_i, t_flags flags)
{
	int	contador;

	contador = 0;
	if (save_i < 0 && flags.ponto >= 0)
	{
		if (save_i == -2147483648)
			ft_putchar(' ');
		else
			ft_putchar('-');
	}
	if (flags.ponto >= 0)
		contador += ft_treat_largura(flags.ponto - 1, ft_strlen(a) - 1, 1);
	contador += ft_putstrprec(a, ft_strlen(a));
	return (contador);
}

static int	ft_put_part_int(char *a, int save_i, t_flags flags)
{
	int	contador;

	contador = 0;
	if (flags.negativo == 1)
		contador += ft_in_put_part_int(a, save_i, flags);
	if (flags.ponto >= 0 && (size_t)flags.ponto < ft_strlen(a))
		flags.ponto = ft_strlen(a);
	if (flags.ponto >= 0)
	{
		flags.largura -= flags.ponto;
		contador += ft_treat_largura(flags.largura, 0, 0);
	}
	else
		contador += ft_treat_largura(flags.largura, ft_strlen(a), flags.zero);
	if (flags.negativo == 0)
		contador += ft_in_put_part_int(a, save_i, flags);
	return (contador);
}

int	ft_treat_int(int i, t_flags flags)
{
	char				*a;
	unsigned int		save_i;
	int					contador;

	save_i = i;
	contador = 0;
	if (flags.ponto == 0 && i == 0)
	{
		contador += ft_treat_largura(flags.largura, 0, 0);
		return (contador);
	}
	if (i < 0 && (flags.ponto >= 0 || flags.zero == 1))
	{
		if (flags.zero == 1 && flags.ponto <= -1)
			ft_putstrprec("-", 1);
		i *= -1;
		flags.zero = ft_flag_zero(flags);
		flags.largura--;
		contador++;
	}
	a = ft_itoa(i);
	contador += ft_put_part_int(a, save_i, flags);
	free(a);
	return (contador);
}
