/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:13:37 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/09 14:50:33 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s[] = "ma chaine a copier";
	char	s2[19];
	char	s3[19];

	printf("chaine de base : %s\nresultat strcpy\t\t: %s\n \
	resultat ft_strcpy\t: %s\n",
		   s, strcpy(s2, s), ft_strcpy(s3, s));
	return (0);
}*/
