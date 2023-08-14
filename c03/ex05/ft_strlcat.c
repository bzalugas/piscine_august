/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:07:22 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/14 22:16:31 by bazaluga         ###   ########.fr       */
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

	dst_len = ft_strlen(dest);
	i = 0;
	if (!size || size + 1 < dst_len)
		return (size + ft_strlen(src));
	while (i < size - dst_len - 1 && src[i])
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	if (!src[i])
		dest[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}

/*#include <stdio.h>
#include <bsd/string.h>
#define SIZE 70


int	main(void)
{
	char	s[] = " tout le monde.";
	char	d1[] = "Bonjour";
	char	d2[] = "Bonjour";
	unsigned int	size = 70;
	size_t	res1;
	unsigned int	res2;

	printf("[STRLCAT]\tAppend <%s> at the end of <%s>\n", s, d1);
	res1 = strlcat(d1, s, size);
	printf("d1 = %lu\n<%s>\n", res1, d1);
	printf("[FT_STRLCAT]\tAppend <%s> at the end of <%s>\n", s, d1);
	res2 = ft_strlcat(d1, s, size);
	printf("d2 = %u\n<%s>\n", res2, d1);
}*/
