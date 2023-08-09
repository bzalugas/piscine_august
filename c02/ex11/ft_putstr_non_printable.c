/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:52:59 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/07 14:52:23 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex(char c, char pad)
{
	if (c >= 16)
	{
		ft_put_hex(c / 16, 0);
		pad = 0;
	}
	if (pad)
		ft_putchar('0');
	if (c % 16 > 9)
		ft_putchar(c % 16 + 'a' - 10);
	else
		ft_putchar(c % 16 + '0');
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			ft_putchar('\\');
			ft_put_hex(*str, 1);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

/*int	main(void)
{
	char s[] = "Coucou\ntu vas bien ?\t\n\r~";
	ft_putstr_non_printable(s);
}*/
