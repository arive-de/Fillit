/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:27:46 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/23 15:20:21 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*ft_solve(t_map *mymap, char ***all_rpieces, int nb_piece)
{
	int		x;
	int		y;

	x = 0;
	if (nb_piece == 0 && x == 0)
	{
		ft_displaymap(mymap);
		exit(0);
	}
	while (x < mymap->size)
	{
		y = 0;
		while (y < mymap->size)
		{
			if (ft_ifplace(mymap, all_rpieces[0], x, y))
			{
				if (!ft_solve(ft_place(mymap, all_rpieces[0], x, y),
							&(all_rpieces[1]), nb_piece - 1))
					ft_rm_pattern(mymap, all_rpieces[0], x, y);
			}
			y++;
		}
		x++;
	}
	return (NULL);
}
