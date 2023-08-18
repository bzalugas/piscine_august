/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:09:53 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/18 10:28:36 by bazaluga         ###   ########.fr       */
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

/*#include <stdio.h>
int	main(void)
{
	int	n;

	n = 2009370276;
	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
	return (0);
}*/
