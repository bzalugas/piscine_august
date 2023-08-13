/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:35:36 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/13 21:03:02 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_check_box_line(char height, int box_index, char *map, int width)
{
	int	i;

	i = (box_index / width) * width;
	while (i < box_index)
	{
		if (map[i] == height)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_box_column(char height, int box_index, char *map, int width)
{
	int	i;

	i = box_index % width;
	while (i < box_index)
	{
		if (map[i] == height)
		{
			return (0);
		}
		i += width;
	}
	return (1);
}	

int	ft_possible_height(char height, int box_index, char *map, char *views)
{
	int	width;

	width = ft_strlen(views) / 4;
	if (ft_check_box_line(height, box_index, map, width)
		&& ft_check_box_column(height, box_index, map, width)
		&& ft_check_views(views, map, box_index, height))
		return (1);
	return (0);
}

int	ft_skyscraper(char *views, char *map, int width, int box_index)
{
	char	height;

	if (box_index == width * width)
		return (1);
	height = '1';
	while (height <= width + '0')
	{
		if (ft_possible_height(height, box_index, map, views))
		{
			map[box_index] = height;
			if (ft_skyscraper(views, map, width, box_index + 1) == 1)
				return (1);
			map[box_index] = '0';
		}
		height++;
	}
	return (0);
}
