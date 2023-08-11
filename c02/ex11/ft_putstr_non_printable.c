/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:52:59 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/11 13:46:48 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex(unsigned char c)
{
	char	hex[2];

	hex[0] = "0123456789abcdef"[c / 16];
	hex[1] = "0123456789abcdef"[c % 16];
	write(1, hex, 2);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			ft_putchar('\\');
			ft_put_hex(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

/*int	main(void)
{
	char string[] = {1, -0x7f,-0x80,'c','o','u','c',0x02,'o','u',0x0a,'t',
	'u',0x20,'v', 'a','s',0x20,'b','i','e','n',0x20,'?', 0x7f};
	ft_putstr_non_printable(string);
	return (0);
}*/
