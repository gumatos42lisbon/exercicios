/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:44:48 by gumatos           #+#    #+#             */
/*   Updated: 2021/03/09 18:02:33 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	*line;

	fd = 0;
	ret = 1;
	if (argc > 1)
		fd = open(argv[1], O_RDONLY);
	while (ret)
	{
		ret = get_next_line(fd, &line);
		printf("ret = %d  line = |%s|\n", ret, line);
		free(line);
	}
	return (0);
}
