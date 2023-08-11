/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:12:51 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/09 19:25:33 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	dst_len;

	dst_len = ft_strlen(dest);
	while (src[i])
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
#define SIZE 22


int	main(void)
{
	char	s[] = "tout le monde.";
	char	d1[SIZE] = "Bonjour ";
	char	d2[SIZE] = "Bonjour ";

	/* printf("[STRCAT]\tAppend <%s> at the end of <%s>\n", s, d1); */
	strcat(d1, s);
	printf("d1 = <%s>\n", d1);
	/* printf("[FT_STRCAT]\tAppend <%s> at the end of <%s>\n", s, d2); */
	ft_strcat(d2, s);
	printf("d2 = <%s>\n", d2);
}
