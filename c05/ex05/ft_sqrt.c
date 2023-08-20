/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:09:53 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/19 20:41:42 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;
	int	i;
	int	j;

	i = 0;
	j = 1;
	n = nb;
	while (n > 0)
	{
		n -= j;
		j += 2;
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	int	n;

	n = 2009370276;
	n = -1073741824;
	n = 2147483647;
	printf("sqrt(%d) = %d\n", n, ft_sqrt(n));
	return (0);
}*/
