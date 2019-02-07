/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sharp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:58:21 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/21 11:37:16 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_sharp(char **pattern)
{
	int	i;
	int j;
	int res;

	res = 0;
	i = 0;
	while (pattern[i])
	{
		j = 0;
		while (pattern[i][j])
		{
			if (pattern[i][j] <= 'Z' && pattern[i][j] >= 'A')
				res++;
			j++;
		}
		i++;
	}
	if (res != 4)
		return (0);
	return (1);
}
