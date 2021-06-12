/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:11:20 by gumatos           #+#    #+#             */
/*   Updated: 2021/05/26 16:11:25 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, const char **argv)
{
	int	x;
	t_lista *listaA;
	t_lista *listaB;

	listaA = iniciar_lista();
	listaB = iniciar_lista();
	if (argc < 2)
		ft_putstr_fd("Error\n", 1);	
	else if (argc == 2)
		start_listas(&listaA, argv);
	/*
	else
	{
		x = 1;
		while (argv[x])
			push_front(&listaA, ft_atoi(argv[x++]));
	}
	print_lista(listaA);
	print_lista(listaB);
	ft_free(listaA);
	ft_free(listaB);
	*/
	return(0);
}