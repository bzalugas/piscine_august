/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:25:00 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/06 13:41:08 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	if (a != b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int tab[] = {1234, 45, -6, 12, 0, 1};
	int size = 6;
	int i;
	i = -1;
	while (++i < size)
		printf("%d ", tab[i]);
	ft_sort_int_tab(tab, size);
	printf("\n");
	i = -1;
	while (++i < size)
		printf("%d ", tab[i]);
	return (0);
}*/
