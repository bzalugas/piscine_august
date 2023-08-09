/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:29:57 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/09 18:23:32 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*#include <bsd/string.h>
#include <stdio.h>
#include <unistd.h>
#define SIZE 14

int	main(void)
{
	unsigned int	size = SIZE;
	char			s[] = "Bonjour a tous !";
	char			d1[] = "lfSLJGLJGJSDGKLKJ";
	char			d2[] = "lfSLJGLJGJSDGKLKJ";
	unsigned long	res1;
	unsigned int	res2;
	unsigned int	i;

	res1 = strlcpy(d1, s, size);
	res2 = ft_strlcpy(d2, s, size);

	printf("[STRLCPY]\n<%s> copied in d1\nres = %lu\nd1 : \n", s, res1);
	write(1, "<", 1);
	i = 0;
	while (i++ < size)
	{
		if (d1[i - 1])
			write(1, &d1[i - 1], 1);
		else
			write(1, "\\0", 2);
	}
	write(1, ">\n", 2);
	printf("[FT_STRLCPY]\n<%s> copied in d2\nres = %u\nd2 : \n", s, res2);
	write(1, "<", 1);
	i = 0;
	while (i++ < size)
	{
		if (d2[i - 1])
			write(1, &d2[i - 1], 1);
		else
			write(1, "\\0", 2);
	}
	write(1, ">\n", 2);
	return (0);
}*/
