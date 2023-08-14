/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:58:29 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/15 01:22:58 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			s1[] = "Bonjour a tous !";
	char			s2[] = "Bonaour a tous !";
	unsigned int	n;
	int				res1;
	int				res2;

	n = 0;
	res1 = strncmp(s1, s2, n);
	res2 = ft_strncmp(s1, s2, n);
	printf("[STRNCMP]\tres = %d\n", res1);
	printf("[FT_STRNCMP]\tres = %d\n", res2);
	return (0);
}
