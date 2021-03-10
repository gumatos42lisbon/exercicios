/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:51:08 by gumatos           #+#    #+#             */
/*   Updated: 2021/03/09 18:07:56 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_find_char(char *str, char c)
{
	int		i;

	i = -1;
	while (*(str + ++i))
		if (*(str + i) == c)
			return (i);
	return (-1);
}

void		free_buff(char **buff)
{
	free(*buff);
	*buff = NULL;
}

int			ft_add_line(char **buff, char **line)
{
	char	*tmp;
	int		i;

	i = 0;
	while ((*buff)[i] != '\n' && (*buff)[i] != '\0')
		++i;
	if ((*buff)[i] == '\n')
	{
		if (!(*line = ft_substr(*buff, 0, i))
				|| !(tmp = ft_strdup(&((*buff)[i + 1]))))
			return (-1);
		free(*buff);
		*buff = tmp;
		if (**buff == '\0')
			free_buff(buff);
		return (1);
	}
	else
	{
		if (!(*line = ft_strdup(*buff)))
			return (-1);
		free_buff(buff);
		return (0);
	}
}

int			ft_out(char **buff, char **line, char **buff_read, int ret)
{
	free(*buff_read);
	if (ret < 0)
		return (-1);
	else if (ret == 0 && *buff == NULL)
	{
		if (!(*line = ft_strdup("")))
			return (-1);
		return (0);
	}
	else
		return (ft_add_line(buff, line));
}

int			get_next_line(int fd, char **line)
{
	static char	*buff = NULL;
	char		*buff_read;
	char		*tmp;
	int			ret;

	if (fd < 0 || line == NULL || BUFFER_SIZE <= 0
			|| !(buff_read = malloc(sizeof(*buff_read) * (BUFFER_SIZE + 1))))
		return (-1);
	while ((ret = read(fd, buff_read, BUFFER_SIZE)) > 0)
	{
		buff_read[ret] = '\0';
		if (buff == NULL)
			buff = ft_strdup(buff_read);
		else
		{
			tmp = ft_strjoin(buff, buff_read);
			free(buff);
			buff = tmp;
		}
		if (!buff)
			return (-1);
		if (ft_find_char(buff, '\n') != -1)
			break ;
	}
	return (ft_out(&buff, line, &buff_read, ret));
}
