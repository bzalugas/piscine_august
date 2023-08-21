/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:44:20 by bazaluga          #+#    #+#             */
/*   Updated: 2023/08/20 19:03:56 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_nblist	*create_one(int len, char *nb, char *letters)
{
	t_nblist	*element;

	element = (t_nblist *)malloc(sizeof(t_nblist));
	if (!element)
		return (NULL);
	element->len = len;
	element->nb = nb;
	element->letters = letters;
	element->next = NULL;
	return (element);
}

int	add_one(t_nblist **list, int len, char *nb, char *letters)
{
	t_nblist	*new;
	t_nblist	*tmp;

	tmp = *list;
	while (tmp->next)
		tmp = tmp->next;
	new = create_one(len, nb, letters);
	if (!new)
		return (0);
	if (!*list)
		*list = new;
	else
		tmp->next = new;
	return (1);
}

int	del_list(t_nblist **list)
{
	t_nblist	*tmp_next;
	t_nblist	*tmp;

	tmp = *list;
	while (tmp)
	{
		tmp_next = (*list)->next;
		if (tmp->nb)
			free(tmp->nb);
		if (tmp->letters)
			free(tmp->letters);
		free(tmp);
		tmp = tmp_next;
	}
	*list = NULL;
	return (0);
}
