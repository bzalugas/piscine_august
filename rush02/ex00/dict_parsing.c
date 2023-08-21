/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:37:24 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/20 23:32:03 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>

char	*trim_spaces(char *str)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = 0;
	while (str[i] && str[i] >= 32 && str[i] <= 126)
	{
		if ((str[i] != 32) || (str[i] == 32 && (i != 0 && str[i - 1] != 32)))
			len++;
		i++;
	}
	if (str[i] != '\n')
		return (NULL);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_specialcpy(res, str);
	return (res);
}

int	parse_line(t_nblist **first, char *line, int len_line)
{
	int		i;
	char	*nb;
	char	*letters;

	i = 0;
	while (i < len_line && line[i] >= '0' && line[i] <= '9')
		i++;
	if (!ft_strndup(line, &nb, i))
		return (0);
	while (i < len_line && line[i] == ' ')
		i++;
	if (line[i] != ':')
		return (0);
	else
		i++;
	while (i < len_line && line[i] == ' ')
		i++;
	line += i;
	letters = trim_spaces(line);
	if (!letters)
		return (0);
	return (add_one(first, ft_strlen(nb), nb, letters));
}

int	concat_lines(char **last_line, char **lines)
{
	char	*tmp;

	tmp = *lines;
	*lines = ft_join2(*last_line, *lines);
	free(tmp);
	free(*last_line);
	*last_line = NULL;
	if (!lines)
		return (0);
	return (1);
}

int	lines_to_nblist(t_nblist **first, char *lines, char **last_line)
{
	int		len_line;
	int		i;

	if (*last_line)
		if (!concat_lines(last_line, &lines))
			return (del_list(first));
	i = 0;
	while (lines[i])
	{
		len_line = find('\n', &lines[i]);
		if (len_line == -1)
		{
			if (!ft_strndup(&lines[i], last_line, -1))
				return (del_list(first));
			len_line = ft_strlen(lines);
		}
		else if (!parse_line(first, &lines[i], len_line))
			return (del_list(first));
		i = len_line;
	}
	return (1);
}

t_nblist	*parse_dict(char *filename)
{
	int			fd;
	int			res;
	char		buff[BUFFER_SIZE];
	t_nblist	*first_nb;
	char		*last_line;

	first_nb = NULL;
	last_line = NULL;
	fd = open(filename, O_RDONLY);
	res = read(fd, &buff, BUFFER_SIZE);
	while (res != 0)
	{
		if (res == -1)
			return (NULL);
		if (!lines_to_nblist(&first_nb, buff, &last_line))
			return (NULL);
		res = read(fd, &buff, BUFFER_SIZE);
	}
	close(fd);
	return (first_nb);
}
