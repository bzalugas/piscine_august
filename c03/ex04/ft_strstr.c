/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:47:04 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/15 18:01:47 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;

	if (!*str && !*to_find)
		return (str);
	while (*str)
	{
		i = 0;
		while (*(str + i) && to_find[i] && to_find[i] == *(str + i))
			i++;
		if (!to_find[i])
			return (str);
		str++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s[] = "";
	char	*needle = "";

	printf("<%s> in <%s> ? => %s\n", needle, s, strstr(s, needle));
	printf("<%s> in <%s> ? => %s\n", needle, s, ft_strstr(s, needle));
	return (0);
}
