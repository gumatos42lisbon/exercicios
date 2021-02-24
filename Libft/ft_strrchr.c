/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 20:30:52 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/24 19:27:07 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t n;

	n = (ft_strlen(str) - 1);
	while (str[n])
	{
		if (str[n] == c)
		{
			return ((char*)str + n);
		}
		n--;
	}
	return (0);
}
