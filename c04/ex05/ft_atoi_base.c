/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:02:22 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/16 18:57:55 by bazaluga         ###   ########.fr       */
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

	if (!valid_base(base, &len))
		return (0);
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	sign = 1;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	nb = 0;
	while (*str && find(*str, base) != -1)
	{
		nb = nb * len + find(*str, base);
		str++;
	}
	return (nb * sign);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("<%s> in base <%s> = %d in base 10.\n", argv[2], argv[1], ft_atoi_base(argv[2], argv[1]));
}*/
