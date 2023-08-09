/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:44:26 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/09 18:47:19 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	return (1);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "Bonjour a tous !";
	char	s2[] = "Bonjour a tous !";
	int		res1;
	int		res2;

	res1 = strcmp(s1, s2);
	res2 = ft_strcmp(s1, s2);
	printf("[STRCMP]\tres = %d\n", res1);
	printf("[FT_STRCMP]\tres = %d\n", res2);
}
