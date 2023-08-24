/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:12:46 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/24 15:38:00 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	nb_digits(long int n, int len_base)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= len_base;
		count++;
	}
	return (count);
}

char	*create_num(long int nb, char *base, int len_nb, int len_base)
{
	int			i;
	char		*str;

	str = (char *)malloc(sizeof(char) * (len_nb + 1));
	if (!str)
		return (NULL);
	str[len_nb] = '\0';
	if (nb == 0)
		str[0] = base[0];
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	i = len_nb - 1;
	while (nb > 0)
	{
		str[i--] = base[nb % len_base];
		nb /= len_base;
	}
	return (str);
}

char	*ft_itoa_base(int n, char *base)
{
	int			len_base;
	long int	nb;
	int			len_nb;

	nb = n;
	len_base = ft_strlen(base);
	len_nb = nb_digits(nb, len_base);
	return (create_num(nb, base, len_nb, len_base));
}
