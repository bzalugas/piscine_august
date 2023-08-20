/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:30:04 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/19 20:09:57 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	res = nb;
	while (nb > 1)
	{
		res *= nb - 1;
		nb--;
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	int	n;
	int	res;

	n = 12;
	res = ft_iterative_factorial(n);
	printf("%d! = %d\n", n, res);
	return (0);
}*/
