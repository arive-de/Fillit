/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:06:19 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/23 12:11:22 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_strpieces(char *file, char **pieces)
{
	char	buf[22];
	int		file_d;
	int		ret;
	int		i;

	i = 0;
	pieces = (char**)malloc(sizeof(char*) * (ft_countpieces(file) + 1));
	if (!pieces || !file)
		return (NULL);
	file_d = open(file, O_RDONLY);
	if (file_d == -1)
		return (NULL);
	while ((ret = read(file_d, &buf, 21)) > 0)
	{
		buf[19] = '\0';
		pieces[i] = (char*)malloc(sizeof(char) * 21);
		ft_strcpy(pieces[i], buf);
		pieces[i][19] = '\n';
		pieces[i][20] = '\0';
		i++;
	}
	pieces[i] = NULL;
	if (close(file_d) == -1)
		return (NULL);
	return (pieces);
}
