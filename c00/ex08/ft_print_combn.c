/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:21:27 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/02 23:20:22 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid(char *nb, int len)
{
	int	i;

	i = len;
	while (--i > 0)
	{
		if (nb[i] <= nb[i - 1])
			return (0);
	}
	if (nb[0] - '0' == 9 - len + 1)
		return (2);
	return (1);
}

void	ft_print_combn(int n)
{
	char	nb[9];
	int		i;
	int		valid;

	i = -1;
	while (++i < n)
		nb[i] = i + '0';
	valid = 1;
	while (valid != 2)
	{
		if (valid)
			write(1, nb, n);
		if (valid == 1)
			write(1, ", ", 2);
		i = n - 1;
		nb[i]++;
		while (i > 0 && nb[i] > '9')
		{
			nb[i] = '0';
			nb[i - 1]++;
			i--;
		}
		valid = is_valid(nb, n);
	}
	write(1, nb, n);
}
