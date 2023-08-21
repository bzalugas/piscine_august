/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:47:28 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/20 23:31:42 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	end_error(char *msg, t_nblist **list, char *nb)
{
	del_list(list);
	if (nb)
		free(nb);
	ft_putstr(msg);
	return (1);
}

char	*parse_number(char *str)
{
	char	*nb;
	int		len;
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	while (str[i] != '\0' && (str[i] == 43 || str[i] == 45))
		if (str[i++] == 45)
			sign *= -1;
	if (sign == -1)
		return (NULL);
	len = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] < 58))
			return (NULL);
		len++;
		i += 1;
	}
	if (!(ft_strndup(&str[i - len], &nb, len)))
		return (NULL);
	return (nb);
}

int	main(int argc, char **argv)
{
	char		*nb;
	t_nblist	*nb_list;
	char		*filename;

	filename = FILENAME;
	if (argc == 2)
		nb = parse_number(argv[1]);
	else if (argc == 3)
	{
		filename = argv[1];
		nb = parse_number(argv[2]);
	}
	else
		return (1);
	if (!nb)
		return (end_error("Error\n", &nb_list, nb));
	nb_list = parse_dict(filename);
	if (!nb_list)
		return (end_error("Dict Error\n", &nb_list, nb));
	return (0);
}
