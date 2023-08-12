/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:58:29 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/11 18:05:19 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			s1[] = "Bonjour a tous !";
	char			s2[] = "Bonojur a tous !";
	unsigned int	n;
	int				res1;
	int				res2;

	n = 5;
	res1 = strncmp(s1, s2, n);
	res2 = ft_strncmp(s1, s2, n);
	printf("[STRNCMP]\tres = %d\n", res1);
	printf("[FT_STRNCMP]\tres = %d\n", res2);
	return (0);
}
