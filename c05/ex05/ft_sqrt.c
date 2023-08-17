/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:09:53 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/17 02:13:29 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_odd(int n)
{
	return (n % 2 != 0);
}

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

/*#include <stdio.h>
int	main(void)
{
	int	n;

	n = 1073741824;
	n = -2;
	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
	return (0);
}*/
