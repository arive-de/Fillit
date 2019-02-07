/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:48:28 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/23 15:22:36 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	***all_rpieces;
	char	**check;
	int		nb_piece;

	check = NULL;
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit source_file\n");
		return (0);
	}
	if (ft_strpieces(argv[1], check) == NULL ||
		ft_isvalid(ft_strpieces(argv[1], check)) == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	all_rpieces = ft_put_rpieces(argv[1]);
	if (ft_completecheck(argv[1], all_rpieces) == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	nb_piece = ft_countpieces(argv[1]);
	ft_fillit(all_rpieces, nb_piece);
	return (0);
}
