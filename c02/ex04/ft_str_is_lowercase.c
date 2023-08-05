/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:26:09 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/05 13:27:35 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char *s = "abc345678";

	printf("%s %s que des lettres minuscules\n", s,
		   ft_str_is_lowercase(s) == 1 ? "ne contient" : "ne contient pas");
	return (0);
}*/
