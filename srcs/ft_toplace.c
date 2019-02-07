/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toplace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:30:22 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/23 12:02:30 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_map	*ft_toplace(t_map *mymap, char **pattern, size_t x, size_t y)
{
	if (ft_ifplace(mymap, pattern, x, y))
	{
		mymap = ft_place(mymap, pattern, x, y);
		return (mymap);
	}
	return (NULL);
}
