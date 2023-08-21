/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:40:12 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/20 22:53:44 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUFFER_SIZE 30
# define FILENAME "numbers.dict"

typedef struct s_nblist
{
	int				len;
	char			*nb;
	char			*letters;
	struct s_nblist	*next;
}				t_nblist;
/* Tool box  */
void			ft_putchar(char c);
unsigned int	ft_strlen(char *str);
void			ft_putstr(char *str);
int				find(char c, char *str);
int				ft_strndup(char *src, char **dst, int n);
char			*ft_specialcpy(char *dst, char *src);
char			*ft_join2(char *s1, char *s2);
/* Linked list handlers */
int				add_one(t_nblist **list, int len, char *nb, char *letters);
int				del_list(t_nblist **list);
/* Rush functions */
t_nblist		*parse_dict(char *filename);
int				rush(char *nb, char *lines);

#endif
