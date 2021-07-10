/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exclude_min_max.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <gumatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:28:30 by gumatos           #+#    #+#             */
/*   Updated: 2021/07/10 19:39:44 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_lista **from, t_lista **to, char *print)
{
	t_lista	*tmp;

	if (!*from)
		return ;
	tmp = *from;
	*from = (*from)->proximo;
	tmp->proximo = *to;
	*to = tmp;
	if (print)
	{
		ft_putstr_fd(print, 1);
		write(1, "\n", 1);
	}
}

int	get_min(t_lista *stack)
{
	t_lista	*tmp;
	int		min;

	tmp = stack;
	min = tmp->dado;
	while (tmp)
	{
		if (min > tmp->dado)
			min = tmp->dado;
		tmp = tmp->proximo;
	}
	return (min);
}

int	get_max(t_lista *stack)
{
	t_lista	*tmp;
	int		max;

	tmp = stack;
	max = tmp->dado;
	while (tmp)
	{
		if (max < tmp->dado)
			max = tmp->dado;
		tmp = tmp->proximo;
	}
	return (max);
}

int	get_min_index(t_lista *a)
{
	int	index;
	int	min;

	index = 0;
	min = get_min(a);
	while (a->dado != min)
	{
		index++;
		a = a->proximo;
	}
	return (index);
}

int	get_max_index(t_lista *a)
{
	int	index;
	int	max;

	index = 0;
	max = get_max(a);
	while (a->dado != max)
	{
		index++;
		a = a->proximo;
	}
	return (index);
}

void	exclude_min_max(t_lista **a, t_lista **b, int lenght, int switcher)
{
	int	index;
	int	i;

	i = 0;
	if (switcher)
		index = get_min_index(*a);
	else
		index = get_max_index(*a);
	if (index > lenght / 2)
	{
		index = lenght - index;
		i = 2;
	}
	if (i != 2)
	{
		while (index-- > 0)
			rotate(a, "ra");
		push(a, b, "pb");
	}
	else
	{
		while (index-- > 0)
			r_rotate(a, "rra");
		push(a, b, "pb");
	}
}
