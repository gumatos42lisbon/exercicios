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
    t_lista *novo_no;

    if(check_dup(*lista, x))
    {
        ft_putstr_fd("Error\n", 1);
        exit(0);
    }
    novo_no = iniciar_no(x);
    if(ft_isempty(*lista))
        (*lista)->ant = novo_no;
    else
        (*lista)->prox = novo_no;
    novo_no->prox = (*lista)->ant;
    novo_no->ant = NULL;
    (*lista)->prox = novo_no;
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

t_lista *iniciar_no(int x)
{
    t_lista *novo_no;

    if(ft_malloc(&novo_no, sizeof(t_lista)) == 0)
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
	nova_lista->prox = NULL;
	nova_lista->ant = NULL;
	return(nova_lista);
}
