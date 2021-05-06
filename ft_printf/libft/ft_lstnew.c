/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:29:16 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/16 15:58:26 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*a;

	a = (t_list *)malloc(sizeof(t_list));
	if (!a)
		return (NULL);
	a->content = content;
	a->next = NULL;
	return (a);
}
