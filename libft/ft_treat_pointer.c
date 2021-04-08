/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:15:44 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/06 15:28:26 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_put_part_pointer(char *ponteiro, t_flags flags)
{
	int contador;

	contador = 0;
	contador += ft_putstrprec("0x", 2);
	if (flags.ponto >= 0)
	{
		contador += ft_treat_largura(flags.ponto, ft_strlen(ponteiro), 1);
		contador += ft_putstrprec(ponteiro, flags.ponto);
	}
	else
		contador += ft_putstrprec(ponteiro, ft_strlen(ponteiro));
	return (contador);
}

int			ft_treat_pointer(unsigned long long ull, t_flags flags)
{
	char	*ponteiro;
	int		contador;

	contador = 0;
	if (ull == 0 && flags.ponto == 0)
	{
		contador += ft_putstrprec("0x", 2);
		return (contador += ft_treat_largura(flags.largura, 0, 1));
	}
	ponteiro = ft_ull_base(ull, 16);
	ponteiro = ft_str_tolower(ponteiro);
	if ((size_t)flags.ponto < ft_strlen(ponteiro))
		flags.ponto = ft_strlen(ponteiro);
	if (flags.negativo == 1)
		contador += ft_in_put_part_pointer(ponteiro, flags);
	contador += ft_treat_largura(flags.largura, ft_strlen(ponteiro) + 2, 0);
	if (flags.negativo == 0)
		contador += ft_in_put_part_pointer(ponteiro, flags);
	free(ponteiro);
	return (contador);
}
