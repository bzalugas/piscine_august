/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:00:55 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/05 21:19:51 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int tab[] = {1,2,3,4,5};
	int size = 5;
	int i;
	i = -1;
	while (++i < size)
		printf("%d ", tab[i]);
	ft_rev_int_tab(tab, size);
	printf("\n");
	i = -1;
	while (++i < size)
		printf("%d ", tab[i]);
	return (0);
}*/
