/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:30:52 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/16 16:13:10 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	n;

	n = (ft_strlen(str) + 1);
	while (str[--n] != char (c))
		if (n == 0)
			return (NULL);
	return ((char *)str + n);
}
