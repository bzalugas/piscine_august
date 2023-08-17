/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:02:22 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/17 17:16:37 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_incorrectchar(char c)
{
	return (c == '+' || c == '-' || c == ' ' || (c >= 9 && c <= 13));
}

int	valid_base(char *base, int *len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i])
	{
		if (is_incorrectchar(base[i]))
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

int	find(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	nb;
	int	sign;
	int	index;

	if (!valid_base(base, &len))
		return (0);
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	sign = 1;
	while (*str && (*str == '-' || *str == '+'))
		if (*str++ == '-')
			sign = -sign;
	nb = 0;
	while (*str)
	{
		index = find(*str, base);
		if (index == -1)
			return (nb * sign);
		nb = nb * len + index;
		str++;
	}
	return (nb * sign);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*base;
	char	*n;
	int		nb;
	if (argc != 3)
		return (1);
	base = argv[1];
	n = argv[2];
	nb = ft_atoi_base(n, base);
	printf("<%s> in base <%s> = %d in base 10.\n", n, base, nb);
}*/
