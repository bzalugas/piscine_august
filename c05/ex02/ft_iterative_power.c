/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:54:33 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/16 21:00:52 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	res = 1;
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	int	n;
	int	pow;
	int	res;

	n = 5;
	pow = 4;
	res = ft_iterative_power(n, pow);
	printf("%d^%d = %d\n", n, pow, res);
	return (0);
}*/
