/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_largura.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:50:27 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/09 13:33:06 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_treat_largura(int largura, int negativo, int has_zero)
{
	int char_count;

	char_count = 0;
	while (largura - negativo > 0)
	{
		if (has_zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		largura -= 1;
		char_count++;
	}
	return (char_count);
}
