/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:38:24 by gumatos           #+#    #+#             */
/*   Updated: 2021/03/15 14:51:44 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	free_buff(char **buff)
{
	free(*buff);
	*buff = NULL;
}

int		ft_find_char(char *buff, char c)
{
	int a;

	a = 0;
	while (buff[a])
	{
		if (buff[a] == c)
			return (a);
		a++;
	}
	return (-1);
}

int		ft_addline(char **buff, char **line)
{
	char	*temp;
	int		i;

	i = 0;
	while ((*buff)[i] != '\n' && (*buff)[i] != '\0')
		i++;
	if ((*buff)[i] == '\n')
	{
		if (!(*line = ft_substr(*buff, 0, i))
				|| !(temp = ft_strdup(&((*buff)[i + 1]))))
			return (-1);
		free(*buff);
		*buff = temp;
		if (**buff == '\0')
			free_buff(buff);
	}
	else
	{
		if (!(*line = ft_strdup(*buff)))
			return (-1);
		free_buff(buff);
		return (0);
	}
	return (1);
}

int		ft_saida(char **buff, char **line, int fd, int a)
{
		if (a < 0)
		return (-1);
	else if (a == 0 && buff[fd] == NULL)
	{
		*line = ft_strdup("");
		return (0);
	}
	else
		return (ft_addline(&buff[fd], line));
}

int		get_next_line(int fd, char **line)
{
	static char	*buff[1024];
	char		buff_read[BUFFER_SIZE + 1];
	char		*temp;
	int			a;

	if (fd < 0 || line == NULL || BUFFER_SIZE <= 0 || read(fd, 0, 0) == -1)
		return (-1);
	while ((a = read(fd, buff_read, BUFFER_SIZE)) > 0)
	{
		buff_read[a] = '\0';
		if (buff[fd] == NULL)
			buff[fd] = ft_strdup(buff_read);
		else
		{
			temp = ft_strjoin(buff[fd], buff_read);
			free(buff[fd]);
			buff[fd] = temp;
		}
		if (!buff[fd])
			return (-1);
		if (ft_find_char(buff[fd], '\n') != -1)
			break ;
	}
	return (ft_saida(buff, line, fd, a));
}
