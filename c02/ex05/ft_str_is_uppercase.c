/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:28:00 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/05 13:29:30 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

/*int	main(void)
{
	char *s = "ABC";

	printf("%s %s que des lettres majuscules\n", s,
		   ft_str_is_uppercase(s) == 1 ? "ne contient" : "ne contient pas");
	return (0);
}*/
