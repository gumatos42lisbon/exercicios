/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 00:50:20 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/12 00:50:30 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main()
{
	char *lol[3];
	int i = 0;
	lol[0] = "yes";
	lol[1] = "yessaie";
	lol[2] = "hon hon gaston";
	t_stock_str *prout = ft_strs_to_tab(3, lol);
	while (prout[i].str)
	{
		printf("%d, %s, %s\n", prout[i].size, prout[i].str, prout[i].copy);
		i++;
	}
}
