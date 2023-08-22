/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 02:11:34 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/22 08:24:49 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

/*
** pos[i] - l == i - c: if lines diff == col diff then same diagonal
*/
int	is_pos_valid(int l, int c, char pos[])
{
	int	i;

	i = -1;
	while (++i < c)
		if (pos[i] - '0' == l || ft_abs((pos[i] - '0') - l) == ft_abs(i - c))
			return (0);
	return (1);
}

void	place_queens(int col, char pos[], int *solutions)
{
	int	line;

	if (col == 10)
	{
		write(1, pos, 11);
		*solutions += 1;
	}
	else
	{
		line = -1;
		while (++line < 10)
		{
			if (is_pos_valid(line, col, pos))
			{
				pos[col] = line + '0';
				place_queens(col + 1, pos, solutions);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	pos[11];
	int		i;
	int		solutions;

	i = -1;
	while (++i < 11)
		pos[i] = '\n';
	solutions = 0;
	place_queens(0, pos, &solutions);
	return (solutions);
}
