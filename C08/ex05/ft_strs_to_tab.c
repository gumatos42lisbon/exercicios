/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 16:13:45 by gumatos           #+#    #+#             */
/*   Updated: 2021/02/11 16:47:32 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

char				*ft_strdup(char *src)
{
	char	*str;
	int		a;

	str = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (str == NULL)
		return (NULL);
	a = 0;
	while (src[a])
	{
		str[a] = src[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str	*tab;
	int			a;

	if (!(tab = malloc(sizeof(t_stock_str) * (argc + 1))))
		return (NULL);
	a = 0;
	while (a < argc)
	{
		tab[a].size = ft_strlen(argv[a]);
		if (!(tab[a].str = malloc(sizeof(char) * ft_strlen(argv[a] + 1))))
			return (NULL);
		tab[a].str = argv[a];
		if (!(tab[a].copy = malloc(sizeof(char) * ft_strlen(argv[a]) + 1)))
			return (NULL);
		tab[a].copy = ft_strdup(argv[a]);
		a++;
	}
	tab[a].str = NULL;
	return (tab);
}
