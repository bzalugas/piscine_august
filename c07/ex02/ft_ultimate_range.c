/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:18:05 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/22 09:26:05 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	*range = NULL;
	size = max - min;
	if (size <= 0)
		return (0);
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		*range[i] = min;
		min++;
		i++;
	}
	return (size);
}

#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*arr;
	int	res;

	min = 20;
	max = 23;
	res = ft_ultimate_range(&arr, min, max);
	i = 0;
	printf("res = %d\n", res);
	while (i < res)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}
