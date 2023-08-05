/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:37:30 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/05 23:02:32 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (2);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (is_alphanum(str[i]) == 1 && (i == 0 || !is_alphanum(str[i - 1])))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", s);
	printf("%s\n", ft_strcapitalize(s));
	return (0);
}*/
