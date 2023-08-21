/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:17:57 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/20 16:41:56 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	find_charset(char *charset, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (charset[j] == str[i])
				return (i);
			j++;
		}
		i++;
	}
	return (-1);
}

int	count_lines(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (find_charset(charset, str) != -1)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strncpy(char *dst, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n - 1)
	{
		dst[i] = src[i];
		i += 1;
	}
	dst[i] = '\0';
	return (dst);
}

char	*create_line(char *str, char *charset, int *trunc_line, int *len)
{
	char	*line;

	*len = find_charset(charset, str);
	(*len)++;
	*trunc_line = (*len == 0);
	if (trunc_line)
		*len = ft_strlen(str);
	line = (char *)malloc(sizeof(char) * (*len + 1));
	if (line == NULL)
		return (NULL);
	ft_strncpy(line, str, *len + 1);
	return (line);
}

char	**ft_split(char *str, char *charset, int *trunc_line)
{
	char	**strs;
	int		lines;
	int		i;
	int		len;

	lines = count_lines(str, charset);
	strs = (char **)malloc(sizeof(char *) * (lines + 1));
	if (!strs)
		return (NULL);
	strs[lines] = NULL;
	i = 0;
	while (i < lines && !*trunc_line && *str)
	{
		strs[i] = create_line(str, charset, trunc_line, &len);
		if (!strs[i])
			return (NULL);
		str += len;
		i++;
	}
	return (strs);
}
