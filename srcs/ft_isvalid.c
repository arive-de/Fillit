/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:20:22 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/23 14:17:21 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_isvalid(char **pieces)
{
	int i;
	int j;

	i = 0;
	while (pieces[i])
	{
		j = 0;
		while (pieces[i][j])
		{
			if (j % 5 != 4)
			{
				if (pieces[i][j] != '#' && pieces[i][j] != '.')
					return (0);
			}
			if (j % 5 == 4 && pieces[i][j] != '\n' && j != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
