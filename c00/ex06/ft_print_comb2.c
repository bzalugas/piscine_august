/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:55:28 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/02 22:11:12 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(int nb1, int nb2)
{
	char	nbs[5];

	nbs[4] = nb2 % 10 + '0';
	nbs[3] = nb2 / 10 + '0';
	nbs[2] = ' ';
	nbs[1] = nb1 % 10 + '0';
	nbs[0] = nb1 / 10 + '0';
	write(1, nbs, 5);
	if (nb1 < 98 || (nb1 <= 98 && nb2 < 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			if (n1 < n2)
				display(n1, n2);
			n2++;
		}
		n1++;
	}
}
