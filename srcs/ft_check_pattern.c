/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_pattern.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arive-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 10:20:58 by arive-de          #+#    #+#             */
/*   Updated: 2016/11/23 10:21:24 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_pattern(char **pattern)
{
	if (ft_check_sharp(pattern) == 1)
	{
		if ((ft_check_patterna(pattern) + ft_check_patternb(pattern)) == 6
			|| (ft_check_patterna(pattern) + ft_check_patternb(pattern)) == 8)
			return (1);
	}
	return (0);
}
