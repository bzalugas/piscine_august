/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:42:34 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/05 13:25:36 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (!src[i] && i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s = "ma chaine a copier";
	char	s2[19];
	char	s3[19];
	unsigned int	n = 19;

	printf("chaine de base : %s\nresultat strcpy\t\t: %s\n
	resultat ft_strcpy\t: %s\n",
		   s, strncpy(s2, s, n), ft_strncpy(s3, s, n));
	return (0);
}*/
