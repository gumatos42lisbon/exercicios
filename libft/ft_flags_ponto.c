/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:37:14 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/08 19:48:59 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_flags		ft_flag_negativo(t_flags flags)
{
	flags.negativo = 1;
	flags.zero = 0;
	return (flags);
}

t_flags		ft_flag_digit(char c, t_flags flags)
{
	if (flags.estrela == 1)
		flags.largura = 0;
	flags.largura = (flags.largura * 10) + (c - '0');
	return (flags);
}

t_flags		ft_flag_largura(va_list args, t_flags flags)
{
	flags.estrela = 1;
	flags.largura = va_arg(args, int);
	if (flags.largura < 0)
	{
		flags.negativo = 1;
		flags.largura *= -1;
	}
	return (flags);
}

int			ft_flags_ponto(const char *save, int start,
			t_flags *flags, va_list args)
{
	int i;

	i = start;
	i++;
	if (save[i] == '*')
	{
		flags->ponto = va_arg(args, int);
		i++;
	}
	else
	{
		flags->ponto = 0;
		while (ft_isdigit(save[i]))
			flags->ponto = (flags->ponto * 10) + (save[i++] - '0');
	}
	return (i);
}
