/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:03:56 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/13 20:49:45 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_display(char *map, int width)
{
	int	i;

	i = 0;
	while (i < width * width)
	{
		write(1, &map[i], 1);
		if (i % width != width - 1)
			write(1, " ", 1);
		else
			write(1, "\n", 1);
		i++;
	}
}
