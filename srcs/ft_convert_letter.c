/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_letter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 17:46:30 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/19 17:50:22 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_convert_letter(char ***r_piece)
{
	int i;
	int j;
	int k;

	i = 0;
	while (r_piece[i])
	{
		j = 0;
		while (r_piece[i][j])
		{
			k = 0;
			while (r_piece[i][j][k])
			{
				if (r_piece[i][j][k] == '#')
					r_piece[i][j][k] = i + 'A';
				k++;
			}
			j++;
		}
		i++;
	}
}
