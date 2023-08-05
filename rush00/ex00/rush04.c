/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 23:14:34 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/05 23:17:45 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int	cpt;

	cpt = 0;
	while (cpt < x)
	{
		if (cpt == 0)
			ft_putchar('A');
		else if (cpt == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		cpt++;
	}
}

void	body_line(int x)
{
	int	cpt;

	cpt = 0;
	while (cpt < x)
	{
		if (cpt == 0)
			ft_putchar('B');
		else if (cpt == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		cpt++;
	}
}

void	last_line(int x)
{
	int	cpt;

	cpt = 0;
	while (cpt < x)
	{
		if (cpt == 0)
			ft_putchar('C');
		else if (cpt == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		cpt++;
	}
}

void	rush(int x, int y)
{
	int	cpt;

	if (x <= 0 || y <= 0)
		return ;
	cpt = 0;
	if (cpt == 0)
	{
		first_line(x);
		cpt++;
		ft_putchar('\n');
	}
	while (cpt > 0 && cpt < y - 1)
	{
		body_line(x);
		cpt++;
		ft_putchar('\n');
	}
	if (cpt == y - 1)
	{
		last_line(x);
		cpt++;
		ft_putchar('\n');
	}
}
