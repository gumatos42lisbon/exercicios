/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operacoes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <gumatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:17:07 by gumatos           #+#    #+#             */
/*   Updated: 2021/07/10 19:33:44 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lista	*ft_last(t_lista *lst)
{
	if (lst)
	    while (lst->proximo)
		    lst = lst->proximo;
	return (lst);
}

void	r_rotate(t_lista **stack, char *print)
{
	t_lista	*tmp;
	t_lista	*head;

	if (!*stack || !(*stack)->proximo)
		return ;
	tmp = *stack;
	head = ft_last(tmp);
	while (tmp->proximo)
	{
		if (!tmp->proximo->proximo)
		{
			tmp->proximo = NULL;
			break ;
		}
		tmp = tmp->proximo;
	}
	head->proximo = *stack;
	*stack = head;
	if (print)
    {
        ft_putstr_fd(print, 1);
        write(1, "\n", 1);
    }
}

void	rotate(t_lista **stack, char *print)
{
	t_lista	*tmp;
	t_lista	*head;

	if (!*stack || !(*stack)->proximo)
		return ;
	head = (*stack)->proximo;
	tmp = *stack;
	ft_last(tmp)->proximo = *stack;
	(*stack)->proximo = NULL;
	*stack = head;
	if (print)
    {
        ft_putstr_fd(print, 1);
        write(1, "\n", 1);
    }
}

void    sort_3(t_lista **a)
{
    int _A;
    int _B;
    int _C;

    _A = (*a)->dado;
    _B = (*a)->proximo->dado;
    _C = (*a)->proximo->proximo->dado;
    if(_A < _B && _A < _C && _B > _C)
    {
        ft_swap(a, "sa");
        rotate(a,"ra");
    }
    else if (_A > _B && _A < _C && _B < _C)
        ft_swap(a, "sa");
    else if (_A < _B && _A > _C && _B > _C)
        r_rotate(a, "rra");
    else if (_A > _B && _A > _C && _B < _C)
        rotate(a, "ra");
    else if (_A > _B && _A > _C && _B > _C)
    {
        ft_swap(a, "sa");
        r_rotate(a, "rra");
    }
}

void	sort_4(t_lista **a, t_lista **b, int argc)
{
	exclude_min_max(a, b, argc, 1);
	sort_3(a);
	push(b, a, "pa");
}

void    ft_swap(t_lista **stack, char *print)
{
    int tmp;

    if (!*stack || !(*stack)->proximo)
        return ;
    tmp = (*stack)->dado;
    (*stack)->dado = (*stack)->proximo->dado;
    (*stack)->proximo->dado = tmp;
    if (print)
    {
        ft_putstr_fd(print, 1);
        write(1, "\n", 1);
    }
}

void    ft_ss(t_lista **stack_a, t_lista **stack_b, char *print)
{
    ft_swap(stack_a, NULL);
    ft_swap(stack_b, NULL);
    if (print)
        ft_putstr_fd("sa\nsb\n", 1);
}