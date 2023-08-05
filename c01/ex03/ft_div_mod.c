/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:47:41 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/05 21:19:22 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	a = 18;
	int	b = 5;
	int	div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, reste %d\n", a, b, div, mod);
	return (0);
}*/
