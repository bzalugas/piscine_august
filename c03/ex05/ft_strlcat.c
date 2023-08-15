/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:07:22 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/15 13:56:15 by bazaluga         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0)
		return (dst_len + src_len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	if (size < dst_len)
		return (src_len + size);
	return (dst_len + src_len);
}

/*#include <stdio.h>
#include <bsd/string.h>
#define SIZE 70


int	main(void)
{
	char	s[] = " tout le monde.";
	char	d1[SIZE] = "Bonjour";
	char	d2[SIZE] = "Bonjour";
	unsigned int	size = 18;
	size_t	res1;
	unsigned int	res2;

	printf("[STRLCAT]\tAppend <%s> at the end of <%s>\n", s, d1);
	res1 = strlcat(d1, s, size);
	printf("d1 = %lu\n<%s>\n-------------------------------------\n", res1, d1);
	printf("[FT_STRLCAT]\tAppend <%s> at the end of <%s>\n", s, d2);
	res2 = ft_strlcat(d2, s, size);
	printf("d2 = %u\n<%s>\n", res2, d2);
}*/
