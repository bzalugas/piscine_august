/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:01:23 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/16 21:03:47 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>
int	main(void)
{
	int	n;
	int	pow;
	int	res;

	n = 23;
	pow = 6;
	res = ft_recursive_power(n, pow);
	printf("%d^%d = %d\n", n, pow, res);
	return (0);
}*/
