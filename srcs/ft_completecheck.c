/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_completecheck.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 17:48:35 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/23 15:16:33 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_completecheck(char *file, char ***all_rpieces)
{
	int i;
	int ret;

	ret = 1;
	i = 0;
	if (ft_verif_file(file) == 0)
		return (0);
	if (!all_rpieces)
		return (0);
	if (ft_isempty(*all_rpieces) == 1)
		return (0);
	while (all_rpieces[i])
		ret *= ft_check_pattern(all_rpieces[i++]);
	if (ft_countpieces(file) > 26 || ft_countpieces(file) < 1)
		return (0);
	return (ret);
}
