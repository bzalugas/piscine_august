/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:37:49 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/23 21:24:26 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_size(char *str, char *charset)
{
	int	i;
	int	sep;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		sep = is_sep(str[i], charset);
		if ((i == 0 && !sep) || (i > 0 && !sep && is_sep(str[i - 1], charset)))
			count++;
		i++;
	}
	return (count);
}

int	next_split(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset))
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strncpy(char *dst, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	int		i;
	int		len;
	char	**strs;

	size = count_size(str, charset);
	strs = (char **)malloc(sizeof(char *) * (size + 1));
	strs[size] = NULL;
	if (!strs)
		return (NULL);
	i = 0;
	while (i < size)
	{
		len = next_split(str, charset);
		strs[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!strs[i])
			return (NULL);
		ft_strncpy(strs[i], str, len);
		while (is_sep(str[len], charset))
			len++;
		str += len;
		i++;
	}
	return (strs);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	char	**s = ft_split(av[1], av[2]);
	int i = 0;
	while (s[i])
	{
		printf("%s\n", s[i]);
		i++;
	}
	return (0);
}
