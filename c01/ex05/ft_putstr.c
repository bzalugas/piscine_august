/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:51:30 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/05 21:19:39 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

/*int	main(void)
{
	ft_putstr("Ma/mon correctrice/correcteur est la/le meilleur(e)");
	return (0);
}*/
