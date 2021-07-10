/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preencher_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <gumatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:03:38 by gumatos           #+#    #+#             */
/*   Updated: 2021/07/10 18:30:27 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_lista **stack)
{
	while (*stack)
	{
		free(*stack);
		*stack = (*stack)->proximo;
	}
	free(*stack);
}

void	error_(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

static int checar_numero(char **argv, char *nbr, int i)
{
    int numero;
    long long n;
    int x;

    numero = 0;
    n = ft_atoi(nbr, &numero);
    if (numero || n > MAX_INT || n < MIN_INT)
        error_();
    x = 1;
    while (x != i)
    {
        if (n == ft_atoi(argv[x++], 0))
        {
            write(2, "Duplicated Number\n", 18);
            exit(1);
        }
    }
    return ((int)n);
}

int preencher_stack(char **argv, t_lista **stack)
{
    t_lista *x;
    t_lista *head;
    int i;

    i = 1;
    if (*stack == NULL)
    {
        *stack = (t_lista *)malloc(sizeof(t_lista *));
        (*stack)->dado = checar_numero(argv, argv[i], i);
        (*stack)->proximo = NULL;
    }
    head = *stack;
    while (argv[++i])
    {
        x = (t_lista *)malloc(sizeof(t_lista *));
        x->dado = checar_numero(argv, argv[i], i);
        x->proximo = NULL;
        (*stack)->proximo = x;
        *stack = (*stack)->proximo;
    }
    *stack = head;
    return (1);
}

