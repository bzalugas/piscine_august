/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:59:15 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/19 20:53:15 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;
	int	i;

	n = 1;
	i = 0;
	while (nb > 0)
	{
		nb -= n;
		n += 2;
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	max;
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	max = ft_sqrt(nb);
	i = 2;
	while (i < max)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	int n;
	int	res;

	n = -2147483648;
	res = ft_find_next_prime(n);
	printf("next prime from %d is %d\n", n, res);
	return (0);
}*/
