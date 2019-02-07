/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arive-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 10:12:57 by arive-de          #+#    #+#             */
/*   Updated: 2016/11/23 10:13:00 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_init_map(char **ret, int size)
{
	int		i;
	int		j;

	i = 0;
	ret = (char**)malloc(sizeof(char*) * (size + 1));
	if (!ret)
		return (NULL);
	while (i < size)
	{
		j = 0;
		ret[i] = (char*)malloc(sizeof(char) * (size + 1));
		if (!*ret)
			return (NULL);
		while (j < size)
			ret[i][j++] = '.';
		ret[i][j] = '\0';
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
