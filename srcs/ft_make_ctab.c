/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_ctab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:33:23 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/23 11:41:46 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_make_ctab(char *piece)
{
	int		i;
	int		j;
	char	**ret;

	i = 0;
	j = 0;
	ret = (char**)malloc(sizeof(char*) * 5);
	if (!ret)
		return (NULL);
	while (i < 4)
	{
		ret[i++] = ft_strsub(piece, j, 4);
		j += 5;
	}
	ret[i] = NULL;
	return (ret);
}
