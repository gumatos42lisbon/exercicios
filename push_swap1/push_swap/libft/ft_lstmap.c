/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 14:23:54 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/16 15:56:18 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*retorno;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	retorno = ft_lstnew(f(lst->content));
	if (!retorno)
		return (NULL);
	lst = lst->next;
	temp = retorno;
	while (lst)
	{
		temp->next = ft_lstnew(f(lst->content));
		if (!temp->next)
		{
			ft_lstclear(&retorno, del);
			return (NULL);
		}
		temp = temp->next;
		lst = lst->next;
	}
	return (retorno);
}
