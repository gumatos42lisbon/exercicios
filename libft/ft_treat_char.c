/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:36:10 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/12 14:53:03 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_treat_char(char c, t_flags flags)
{
	int char_count;

	char_count = 0;
	if (flags.negativo == 1)
		ft_putchar(c);
	char_count = ft_treat_largura(flags.largura, 1, 0);
	if (flags.negativo == 0)
		ft_putchar(c);
	return (char_count + 1);
}
