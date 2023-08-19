/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:59:15 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/19 02:11:04 by bazaluga         ###   ########.fr       */
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
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	int n = ft_find_next_prime(6);
	printf("%d\n", n);
	return (0);
}*/
