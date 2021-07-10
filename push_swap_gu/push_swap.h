/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <gumatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:46:56 by gumatos           #+#    #+#             */
/*   Updated: 2021/07/10 19:41:18 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MAX_INT 2147483647
# define MIN_INT -2147483648
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif
# include "libft/libft.h"

# include <stdarg.h>
# include <stdio.h>

typedef struct s_lista
{
    int dado;
    struct s_lista *proximo;
}   t_lista;

int					main(int argc, char **argv);
int is_sorted(t_lista *stack);

void	exclude_min_max(t_lista **a, t_lista **b, int lenght, int switcher);
void	error_(void);
void	free_stack(t_lista **stack);
void    sort_3(t_lista **a);
void	sort_4(t_lista **a, t_lista **b, int argc);
void	rotate(t_lista **stack, char *print);
void	r_rotate(t_lista **stack, char *print);
void	push(t_lista **from, t_lista **to, char *print);


void    ft_ss(t_lista **stack_a, t_lista **stack_b, char *print);
void    ft_swap(t_lista **stack, char *print);

t_lista *ft_addno(int nbr, t_lista **lista);
int preencher_stack(char **argv, t_lista **stack);
int	get_max_index(t_lista *a);
int	get_min_index(t_lista *a);
int	get_max(t_lista *stack);
int	get_min(t_lista *stack);

#endif