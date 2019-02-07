/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countpieces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:43:32 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/23 10:14:31 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_countpieces(char *file)
{
	char	buf;
	int		file_d;
	int		ret;
	int		res;

	res = 0;
	if (!file)
		return (0);
	file_d = open(file, O_RDONLY);
	if (file_d == -1)
		return (0);
	while ((ret = read(file_d, &buf, 1)) > 0)
		res++;
	res++;
	if (res % 21 != 0)
		return (0);
	res /= 21;
	return (res);
}
