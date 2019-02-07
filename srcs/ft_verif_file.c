/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arive-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 14:42:09 by arive-de          #+#    #+#             */
/*   Updated: 2016/11/23 15:21:42 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_verif_file(char *file)
{
	char	buf[1];
	char	*test;
	int		fd;
	int		ret;
	int		i;

	i = 0;
	test = (char*)malloc(sizeof(char*) * (651));
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((ret = read(fd, &buf, 1)) > 0)
	{
		test[i] = buf[0];
		i++;
	}
	test[i] = '\0';
	close(fd);
	if ((int)ft_strlen(test) != 21 * ft_countpieces(file) - 1)
	{
		free(test);
		return (0);
	}
	free(test);
	return (1);
}
