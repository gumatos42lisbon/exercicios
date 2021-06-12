/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcoes1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:44:01 by gumatos           #+#    #+#             */
/*   Updated: 2021/05/31 10:44:23 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


int lista_len(t_lista *a)
{
    t_lista *no;
    int x;

    no = a->prox;
    x = 0;
    while (no)
    {
        no = no->prox;
        x++;
    }
    return (x);
}

size_t ft_isempty(t_lista *lista)
{
    if (lista->prox == NULL && lista->ant == NULL)
        return(1);
    else
        return (0);
}

int check_dup(t_lista *lista, int x)
{
    t_lista *no;

    if (!lista || !(lista->ant))
        return (0);
    no = lista->ant;
    while (no)
    {
        if (no->dado == x)
            return (1);
        no = no->ant;
    }
    return(0);
}