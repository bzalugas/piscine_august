/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduvnjak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:51:59 by sduvnjak          #+#    #+#             */
/*   Updated: 2023/08/05 13:33:12 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x)
{
	int compteur;

	compteur = 0;
	while (compteur < x)
	{
		if (compteur = 0)
		{
			write(1, "A", 1);
		}

		else if (compteur = x-1)
		{
			write(1, "A", 1);
		}

		else 
		{
			write(1, "B", 1);
		}
		compteur++;
	}
}

void last_line()




int main(void)
{
	char c = 'o';
	int x = 5;
	return (0);
}
