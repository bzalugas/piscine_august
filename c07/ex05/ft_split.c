/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:37:49 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/22 18:21:56 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_cset(char c, char *str)
{
	int	i;

	while (str[i])
	{
		if (str[i] == c)
			return (1);
	}
	return (0);
}

int	need_for_split(char *str, char *charset, int i)
{
	if ((i == 0 && !is_cset(str[i], charset))
		|| (i > 0 && !is_cset(str[i], charset)
			&& is_cset(str[i - 1], charset)))
		return (1);
	return (0);
}

int	count_strs(char *str, char *charset)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (need_for_split(str, charset, i))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strndup(char *str, unsigned int n)
{
	unsigned int	i;
	char			*new;

	i = 0;
	while (str[i] && i < n)
		i++;
	new = (char *)malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (str[i] && i < n)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		size;
	int		i;
	int		j;

	size = count_strs(str, charset);
	strs = (char **)malloc(sizeof(char *) * (size + 1));
	if (!strs)
		return (NULL);
	strs[size] = NULL;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[j] && !is_cset(str[j], charset))
			j++;
		strs[i] = ft_strndup(str, j);
		while (str[j] && is_cset(str[j], charset))
			j++;
		str += j;
		i++;
	}
}
