/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_patternb.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arive-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 10:18:36 by arive-de          #+#    #+#             */
/*   Updated: 2016/11/23 10:19:54 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_patternb(char **pattern)
{
	int i;
	int j;
	int res;

	i = 0;
	res = 0;
	while (pattern[i])
	{
		j = 0;
		while (pattern[i][j])
		{
			if (i != 0)
				(pattern[i][j] != '.' && pattern[i][j] != '\0'
					&& pattern[i - 1][j] != '.' ? res++ : res);
			if (j > 0)
			{
				if (pattern[i][j] != '.' && pattern[i][j] != '\0'
				&& pattern[i][j - 1] != '.')
					res++;
			}
			j++;
		}
		i++;
	}
	return (res);
}
