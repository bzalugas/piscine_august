/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:25:39 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/17 23:04:30 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

/*int	main(void)
{
	int	n;
	n = 10;
	ft_putnbr(n);
	write(1, "\n", 1);
	n = 42;
	ft_putnbr(n);
	write(1, "\n", 1);
	n = -42;
	ft_putnbr(n);
	write(1, "\n", 1);
	n = 2147483647;
	ft_putnbr(n);
	write(1, "\n", 1);
	n = -2147483648;
	ft_putnbr(n);
	write(1, "\n", 1);
	n = 0;
	ft_putnbr(n);
	write(1, "\n", 1);
}*/
