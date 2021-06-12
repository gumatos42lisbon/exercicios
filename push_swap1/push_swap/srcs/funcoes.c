/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcoes.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:44:01 by gumatos           #+#    #+#             */
/*   Updated: 2021/05/31 10:44:23 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    push_front(t_lista **lista, int x)
{
    t_no *novo_no;

    if(check_dup(*lista, x))
    {
        ft_putstr_fd("Error\n", 1);
        exit(0);
    }
    novo_no = iniciar_no(x);
    if(ft_isempty(*lista))
        (*lista)->ultimo = novo_no->prox;
    else
        (*lista)->primeiro = novo_no->ant;
    novo_no->prox = (*lista)->ultimo;
    novo_no->ant = NULL;
    (*lista)->ultimo = novo_no;
}

void    start_listas(t_lista **listaA, const char **argv)
{
    char *arg;

    arg = NULL;
    while(*argv[1])
    {
        arg = ft_strchr(argv[1], ' ');
        if(*arg)
            *arg++ = '\0';
        push_front(listaA, ft_atoi(argv[1]));
        argv[1] = arg;
    }
}

int ft_malloc(void *alvo, size_t size)
{
    void **ponteiro;

    ponteiro = (void **)alvo;
    *ponteiro = malloc(size);
    if(*ponteiro == 0)
        return (0);
    return (1);
}

t_no *iniciar_no(int x)
{
    t_no *novo_no;

    if(ft_malloc(&novo_no, sizeof(t_no)) == 0)
        return(NULL);
    novo_no->dado = x;
    novo_no->prox = NULL;
    novo_no->ant = NULL;
    return(novo_no);
}

t_lista	*iniciar_lista()
{
	t_lista *nova_lista;

	if(ft_malloc(&nova_lista, sizeof(t_lista)) == 0)
		return(NULL);
	nova_lista->primeiro = NULL;
	nova_lista->ultimo = NULL;
	return(nova_lista);
}