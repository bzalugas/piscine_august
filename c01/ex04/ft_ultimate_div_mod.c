/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:34:37 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/05 21:19:30 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}

/*#include <stdio.h>

int	main(void)
{
	int	a = 18;
	int	b = 5;
	int	div = a;
	int	mod = b;

	ft_ultimate_div_mod(&div, &mod);
	printf("%d / %d = %d, reste %d\n", a, b, div, mod);
	return (0);
}*/
