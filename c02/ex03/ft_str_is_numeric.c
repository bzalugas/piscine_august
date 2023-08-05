/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:21:51 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/05 13:23:41 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char *s = "345678";

	printf("%s %s que des chiffres\n", s,
		   ft_str_is_numeric(s) == 1 ? "ne contient" : "ne contient pas");
	return (0);
}*/
