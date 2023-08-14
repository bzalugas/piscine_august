/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:47:04 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/14 22:13:47 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;

	while (*str)
	{
		i = 0;
		while (to_find[i] == *(str + i))
			i++;
		if (!to_find[i])
			return (str);
		str++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s[] = "bonjour";
	char	needle[] = "4";

	printf("<%s> in <%s> ? => %s\n", needle, s, strstr(s, needle));
	printf("<%s> in <%s> ? => %s\n", needle, s, ft_strstr(s, needle));
	return (0);
}*/
