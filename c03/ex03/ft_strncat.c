/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:40:20 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/14 22:09:31 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dst_len;

	dst_len = 0;
	while (dest[dst_len])
		dst_len++;
	i = 0;
	while (i < nb && src[i])
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
#define SIZE 22


int	main(void)
{
	char	s[] = "tout le monde.";
	char	d1[SIZE] = "Bonjour ";
	char	d2[SIZE] = "Bonjour ";
	int		size = 15;

	printf("[STRNCAT]\tAppend <%s> at the end of <%s>\n", s, d1);
	strncat(d1, s, size);
	printf("d1 = <%s>\n", d1);
	printf("[FT_STRNCAT]\tAppend <%s> at the end of <%s>\n", s, d2);
	ft_strncat(d2, s, size);
	printf("d2 = <%s>\n", d2);
}*/
