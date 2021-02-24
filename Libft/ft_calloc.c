/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 00:18:30 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/24 00:21:00 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_calloc(size_t a, size_t n)
{
	void *ptr;

	ptr = (void*)malloc(a * n);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, a);
	return (ptr);
}
