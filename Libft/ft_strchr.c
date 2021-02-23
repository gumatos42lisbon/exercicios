/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:41:15 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/22 17:00:27 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int ch)
{
	while (*str)
	{
		if (*str == ch)
		{
			return ((char*)str);
		}
		str++;
	}
	return (0);
}
