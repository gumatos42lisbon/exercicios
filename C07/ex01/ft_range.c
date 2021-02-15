/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 21:24:50 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/05 12:36:31 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int a;

	a = 0;
	if (min >= max)
	{
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[a] = min;
		min++;
		a++;
	}
	return (tab);
}
