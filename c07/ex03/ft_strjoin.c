/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:53:07 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/21 13:40:00 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		len += j;
		/* len += ft_strlen(strs[i]); */
		/* if (i + 1 < size) */
		/* 	len += ft_strlen(sep); */
		i++;
	}
	len += (ft_strlen(sep) * (size - 1));
	return (len);
}

char	*ft_strcat(char *dst, char *src)
{
	int	i;
	int	dst_len;

	dst_len = ft_strlen(dst);
	i = 0;
	while (src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*new;

	len = total_len(size, strs, sep);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len + 1)
	{
		new[i] = '\0';
		i++;
	}
	i = 0;
	while (i < size)
	{
		ft_strcat(new, strs[i]);
		if (i + 1 < size)
			ft_strcat(new, sep);
		i++;
	}
	return (new);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*s;

	s = ft_strjoin(argc - 1, &argv[1], ", ");
	printf("args = %s\n", s);
	free(s);
	return (0);
}
