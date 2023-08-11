/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:29:57 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/11 13:48:49 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;

	len_src = 0;
	while (size && src[len_src] && len_src < size - 1)
	{
		dest[len_src] = src[len_src];
		len_src++;
	}
	dest[len_src] = '\0';
	while (src[len_src])
		len_src++;
	return (len_src);
}

/*#include <bsd/string.h>
#include <stdio.h>
#include <unistd.h>
#define SIZE 36

int	main(void)
{
	unsigned int	size = SIZE;
	char			s[] = "Bonjour a tous les amis de la terre";
	char			d1[] = "abcdefghijklmnopqrstuvwxyzabcde";
	char			d2[] = "abcdefghijklmnopqrstuvwxyzabcde";
	unsigned long	res1;
	unsigned int	res2;
	unsigned int	i;

	res1 = strlcpy(d1, s, size);
	res2 = ft_strlcpy(d2, s, size);

	printf("[STRLCPY]\n<%s> copied in d1\nres = %lu\nd1 : \n", s, res1);
	write(1, "<", 1);
	i = 0;
	while (i < size || d1[i])
	{
		if (d1[i])
			write(1, &d1[i], 1);
		else
			write(1, "\\0", 2);
		i++;
	}
	write(1, ">\n", 2);
	printf("[FT_STRLCPY]\n<%s> copied in d2\nres = %u\nd2 : \n", s, res2);
	write(1, "<", 1);
	i = 0;
	while (i < size || d2[i])
	{
		if (d2[i])
			write(1, &d2[i], 1);
		else
			write(1, "\\0", 2);
		i++;
	}
	write(1, ">\n", 2);
	return (0);
}*/
