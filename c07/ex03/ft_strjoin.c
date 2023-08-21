/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:53:07 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/21 19:58:33 by bazaluga         ###   ########.fr       */
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
	int	len;

	len = 0;
	i = -1;
	while (++i < size)
		len += ft_strlen(strs[i]);
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

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*strs[] = {"Bonjour", "a", "tous", "ca va ?"};
	char	*s;

	//s = ft_strjoin(argc - 1, &argv[1], ", ");
	s = ft_strjoin(0, strs, "|");
	printf("args = %s\n", s);
	free(s);
	return (0);
}*/
