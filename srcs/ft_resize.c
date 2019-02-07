/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 17:00:48 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/23 11:41:59 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_resize(char **piece)
{
	int		i;
	int		j;
	char	**ret;

	j = 0;
	i = ft_height_begin(piece);
	ret = (char**)malloc(sizeof(char*) * (ft_height_end(piece)
				- ft_height_begin(piece) + 2));
	while (i <= ft_height_end(piece))
	{
		ret[j] = ft_strsub(piece[i], (unsigned int)ft_width_begin(piece),
				(size_t)(ft_width_end(piece) - ft_width_begin(piece) + 2));
		i++;
		j++;
	}
	ret[j] = NULL;
	return (ret);
}
