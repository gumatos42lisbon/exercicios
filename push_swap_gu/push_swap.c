/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <gumatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:59:01 by gumatos           #+#    #+#             */
/*   Updated: 2021/07/10 19:41:22 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	quit(t_lista **list)
{
	free_stack(list);
	return (0);
}

int is_sorted(t_lista *stack)
{
    while (stack)
    {
        if (stack->proximo && stack->dado > stack->proximo->dado)
            return (0);
        stack = stack->proximo;
    }
    return (1);
}

void show_list(t_lista *primeirono)
{
    t_lista *aux;
    aux = primeirono;
    printf("-------------PILHA A-------------\n");
    while (aux)
    {
        printf("%d  |  ", aux->dado);
        aux = aux->proximo;
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    t_lista *a;
    t_lista *b;

    a = NULL;
    b = NULL;

    if(argc > 1 && argv && !preencher_stack(argv, &a))
        return (0);
    show_list(a);
    if (is_sorted(a))
        return (quit(&a));
    if (--argc == 2)
		ft_swap(&a, "sa");
	 else if (argc == 3)
		sort_3(&a);
	else if (argc == 4)
		sort_4(&a, &b, argc);
	/* 
    else if (argc == 5)
		sort_5(&a, &b, argc);
	else if (argc <= 500)
		big_sort(&a, &b, --argc);
	*/
    show_list(a);
    return (quit(&a));
}