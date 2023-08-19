/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:19:17 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/19 13:37:14 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	valid_base(char *base, int *len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (0);
		i++;
	}
	*len = i;
	if (i >= 2)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len_base;
	long int	n;

	if (!valid_base(base, &len_base))
		return ;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= len_base)
		ft_putnbr_base(n / len_base, base);
	write(1, &base[n % len_base], 1);
}

/*int	main(void)
{
	ft_putnbr_base(42, "01");
}*/
