/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:04:05 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/19 20:31:47 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>
int	main(void)
{
	int	i;

	i = 47;
	printf("index %d of fibo = %d\n", i, ft_fibonacci(i));
	return (0);
}*/
