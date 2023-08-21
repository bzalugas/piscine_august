/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:53:54 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/20 20:54:05 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_strndup(char *src, char **dst, int n)
{
	unsigned int	len;
	unsigned int	i;

	if (n == 0)
		return (0);
	if (n == -1)
		len = ft_strlen(src);
	else
		len = n;
	*dst = malloc(sizeof(char) * (len + 1));
	if (!*dst)
		return (0);
	i = 0;
	while (src[i])
	{
		(*dst)[i] = src[i];
		i++;
	}
	(*dst)[i] = '\0';
	return (1);
}
