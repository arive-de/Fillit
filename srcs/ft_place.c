/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:07:55 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/23 12:03:03 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*ft_place(t_map *mymap, char **pattern, size_t x, size_t y)
{
	size_t i;
	size_t j;

	i = 0;
	while (x + i < ft_sstrlen(mymap->map) && i < ft_sstrlen(pattern))
	{
		j = 0;
		while (y + j < ft_strlen(mymap->map[x + i])
				&& j < ft_strlen(pattern[i]))
		{
			if (pattern[i][j] <= 'Z' && pattern[i][j] >= 'A'
					&& mymap->map[x + i][y + j] == '.')
				mymap->map[x + i][y + j] = pattern[i][j];
			j++;
		}
		i++;
	}
	return (mymap);
}
