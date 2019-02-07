/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 18:00:32 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/23 10:11:17 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_make_str(char **piece, char **pnr)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	len = ((ft_height_end(pnr) - ft_height_begin(pnr) + 2) *
			(ft_strlen(piece[i]) + 1));
	str = (char*)malloc(sizeof(char) * (len + 1));
	while (i < (ft_height_end(pnr) - ft_height_begin(pnr) + 1))
	{
		str[k] = piece[i][j++];
		if (piece[i][j - 1] == '\0')
		{
			str[k] = '\n';
			i++;
			j = 0;
		}
		k++;
	}
	str[k] = '\0';
	return (str);
}
