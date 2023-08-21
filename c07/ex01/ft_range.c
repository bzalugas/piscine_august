/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:26:24 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/21 20:10:13 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

/*#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*arr;

	min = 24;
	max = 23;
	arr = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}*/
