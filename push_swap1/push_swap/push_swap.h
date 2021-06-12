/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:46:56 by gumatos           #+#    #+#             */
/*   Updated: 2021/05/17 13:46:58 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdarg.h>

typedef struct s_no
{
    int dado;
	struct t_no* prox;
    struct t_no* ant;
}   t_no;

typedef struct s_lista
{
    struct t_no *primeiro;
    struct t_no *ultimo;
}   t_lista;


int					main(int argc, const char **argv);
int                 ft_malloc(void *alvo, size_t size);
int                 check_dup(t_lista *lista, int x);
size_t              ft_isempty(t_lista *lista);
int                 lista_len(t_lista *a);

// void                 a_to_b(t_lista *a, t_lista *b, int x);
void    start_listas(t_lista **listaA, const char **argv);
// void                push_front(t_lista **lista, int x);

// t_lista    *iniciar_no(int x);

t_lista *iniciar_lista();
t_no    *iniciar_no(int x);



#endif