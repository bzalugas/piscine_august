/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 00:15:19 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/22 09:15:21 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*dst;
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	dst = malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*d;
	char	*e;

	d = ft_strdup("salut les amis");
	e = strdup("salut les amis");
	printf("%s\n", d);
	printf("%s\n", e);
	free(d);
	free(e);
	return (0);
}*/
