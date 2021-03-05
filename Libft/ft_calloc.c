/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 00:18:30 by gumatos           #+#    #+#             */
/*   Updated: 2021/03/02 16:45:50 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t a, size_t n)
{
	void *ptr;

	if (a == 0 || n == 0)
	{
		a = 1;
		n = 1;
	}
	ptr = malloc(a * n);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (a * n));
	return (ptr);
}
