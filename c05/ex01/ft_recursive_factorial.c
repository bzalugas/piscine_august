/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 20:50:59 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/19 20:11:59 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>
int	main(void)
{
	int	n;
	int	res;

	n = -5;
	res = ft_recursive_factorial(n);
	printf("%d! = %d\n", n, res);
	return (0);
}*/
