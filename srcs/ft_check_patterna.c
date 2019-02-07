/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_patterna.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arive-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 10:14:46 by arive-de          #+#    #+#             */
/*   Updated: 2016/11/23 13:24:04 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_patterna(char **pattern)
{
	size_t	i;
	size_t	j;
	int		res;

	i = 0;
	res = 0;
	while (pattern[i])
	{
		j = 0;
		while (pattern[i][j])
		{
			if (i < ft_sstrlen(pattern) - 1)
				(pattern[i][j] != '.'
					&& pattern[i + 1][j] != '.' ? res++ : res);
			if ((size_t)j < ft_strlen(pattern[i]))
			{
				if (pattern[i][j] != '.' && pattern[i][j + 1] != '.' &&
				pattern[i][j + 1] != '\0')
					res++;
			}
			j++;
		}
		i++;
	}
	return (res);
}
