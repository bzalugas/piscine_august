/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:35:36 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/12 15:51:40 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

/*
* returns 1 if a solution is found, else 0
*/
int skyscraper(char *views, char *map, int box_index)
{
    char    height;

    if (box_index == WIDTH * WIDTH)
    {
        return (1);
    }
    height = 1;
    while (height <= WIDTH)
    {
        //if height possible
        //  place height in map[box_index]
        //  if skyscraper(views, map, box_index + 1) == 1
        //      return (1);
        //  else
        //      remove height from map[box_index]
        height++;
    }
    return (0);
}