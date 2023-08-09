/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:37:30 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/09 15:55:34 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_type(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= '0' && c <= '9')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	int				type;

	i = 0;
	type = 0;
	while (str[i])
	{
		type = char_type(str[i]);
		if (type == 2 && (i == 0 || !char_type(str[i - 1])))
			str[i] -= 32;
		else if (type == 1)
			str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char s[] = "salut, coMMent tu vas ? 42Mots quarante-deux; cinquante+et+un";
	printf("%s\n", s);
	printf("%s\n", ft_strcapitalize(s));
	return (0);
}*/
