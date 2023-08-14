/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:40:28 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/13 22:40:51 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	print_error(char *msg, void *addr1, void *addr2)
{
	if (addr1)
		free(addr1);
	if (addr2)
		free(addr2);
	ft_putstr(msg);
	return (1);
}

int	finish(void *a, void *b)
{
	if (a)
		free(a);
	if (b)
		free(b);
	return (0);
}

int	ft_is_good_num(char c, int width)
{
	return (c >= '1' && c <= width + '0');
}

char	*parse_views(char *str, int *width)
{
	int		i;
	int		j;
	char	*views;

	*width = ft_strlen(str);
	if ((*width + 1) % 8 != 0)
		return (NULL);
	*width = (*width + 1) / 8;
	if (*width < 2 || *width > 9)
		return (NULL);
	views = (char *)malloc(sizeof(char) * (*width * 4));
	if (!views)
		return (NULL);
	i = -1;
	j = -1;
	while (str[++i])
	{
		if (i % 2 == 0 && !ft_is_good_num(str[i], *width))
			return (NULL);
		else if (i % 2 == 0)
			views[++j] = str[i];
		if (i % 2 != 0 && str[i] != ' ')
			return (NULL);
	}
	return (views);
}

int	main(int argc, char **argv)
{
	char	*views;
	char	*map;
	int		i;
	int		width;

	views = NULL;
	map = NULL;
	if (argc == 2)
	{
		views = parse_views(argv[1], &width);
		map = (char *)malloc(sizeof(char) * (width * width));
		if (!views || !map)
			return (print_error("Error\n", views, map));
		i = -1;
		while (++i < width * width)
			map[i] = '0';
		if (ft_skyscraper(views, map, width, 0))
			ft_display(map, width);
		else
			return (print_error("Error\n", views, map));
	}
	else
		return (print_error("Error\n", NULL, NULL));
	return (finish(views, map));
}
