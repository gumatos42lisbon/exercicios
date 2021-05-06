/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:46:40 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/16 16:18:25 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_treat_percent(t_flags flags)
{
	int	char_count;

	char_count = 0;
	if (flags.negativo == 1)
		char_count += ft_putstrprec("%", 1);
	char_count += ft_treat_largura(flags.largura, 1, flags.zero);
	if (flags.negativo == 0)
		char_count += ft_putstrprec("%", 1);
	return (char_count);
}
