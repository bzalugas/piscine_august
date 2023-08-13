/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_views.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 21:56:26 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/13 21:01:05 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

char	count_colup(char *map, int width, int box_index, char height)
{
	char	count;
	char	max;
	int		line;
	int		col;

	count = '0';
	max = '0';
	col = box_index % width;
	line = 0;
	while (line < width)
	{
		if (line * width + col == box_index && height > max)
		{
				count++;
				max = height;
		}
		else if (map[line * width + col] > max)
		{
			count++;
			max = map[line * width + col];
		}
		line++;
	}
	return (count);
}

char	count_coldown(char *map, int width, int box_index, char height)
{
	char	count;
	char	max;
	int		line;
	int		col;

	count = '0';
	max = '0';
	col = box_index % width;
	line = width - 1;
	while (line >= 0)
	{
		if (line * width + col == box_index && height > max)
		{
				count++;
				max = height;
		}
		else if (map[line * width + col] > max)
		{
			count++;
			max = map[line * width + col];
		}
		line--;
	}
	return (count);
}

char	count_rowleft(char *map, int width, int box_index, char height)
{
	char	count;
	char	max;
	int		col;
	int		line;

	count = '0';
	max = '0';
	line = box_index / width;
	col = 0;
	while (col < width)
	{
		if (line * width + col == box_index && height > max)
		{
				count++;
				max = height;
		}
		else if (map[line * width + col] > max)
		{
			count++;
			max = map[line * width + col];
		}
		col++;
	}
	return (count);
}

char	count_rowright(char *map, int width, int box_index, char height)
{
	char	count;
	char	max;
	int		col;
	int		line;

	count = '0';
	max = '0';
	line = box_index / width;
	col = width - 1;
	while (col >= 0)
	{
		if (line * width + col == box_index && height > max)
		{
				count++;
				max = height;
		}
		else if (map[line * width + col] > max)
		{
			count++;
			max = map[line * width + col];
		}
		col--;
	}
	return (count);
}

int	ft_check_views(char *views, char *map, int box_index, int height)
{
	char	actual_views[4];
	int		width;

	width = ft_strlen(views) / 4;
	actual_views[0] = count_colup(map, width, box_index, height);
	actual_views[1] = count_coldown(map, width, box_index, height);
	actual_views[2] = count_rowleft(map, width, box_index, height);
	actual_views[3] = count_rowright(map, width, box_index, height);
	if (actual_views[0] > views[0 * width + box_index % width]
		|| actual_views[2] > views[2 * width + box_index / width])
		return (0);
	if (box_index % width == width - 1)
	{
		if (actual_views[2] != views[2 * width + box_index / width]
			|| actual_views[3] != views[3 * width + box_index / width])
			return (0);
	}
	if (box_index / width == width - 1)
	{
		if (actual_views[0] != views[0 * width + box_index % width]
			|| actual_views[1] != views[1 * width + box_index % width])
			return (0);
	}
	return (1);
}
