/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_smap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arive-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 10:13:06 by arive-de          #+#    #+#             */
/*   Updated: 2016/11/23 10:13:08 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*ft_init_smap(int size)
{
	t_map	*mymap;

	mymap = (t_map*)malloc(sizeof(t_map));
	if (!mymap)
		return (NULL);
	mymap->size = size;
	mymap->map = ft_init_map(mymap->map, size);
	return (mymap);
}
