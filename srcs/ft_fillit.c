/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 17:32:33 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/22 17:45:49 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_fillit(char ***all_rpieces, int nb_piece)
{
	int		size;
	t_map	*p_map;

	size = 2;
	p_map = NULL;
	while (p_map == NULL)
	{
		p_map = ft_init_smap(size++);
		p_map = ft_solve(p_map, all_rpieces, nb_piece);
	}
	free(p_map->map);
	free(p_map);
	p_map = NULL;
}
