/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:48:47 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/23 15:00:03 by arive-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>
# include "libft.h"

typedef struct	s_map
{
	int			size;
	char		**map;
}				t_map;

void			ft_displaymap(t_map *mymap);
int				ft_check_patternb(char **pattern);
int				ft_check_patterna(char **pattern);
int				ft_check_pattern(char **pattern);
t_map			*ft_init_smap(int size);
char			**ft_init_map(char **ret, int size);
size_t			ft_sstrlen(char **sstr);
char			**ft_resize(char **piece);
char			**ft_make_ctab(char *piece);
char			**ft_strpieces(char *file, char **pieces);
int				ft_countpieces(char *file);
int				ft_isvalid(char **pieces);
int				ft_height_begin(char **piece);
int				ft_height_end(char **piece);
int				ft_width_begin(char **piece);
int				ft_width_end(char **piece);
char			*ft_make_str(char **piece, char **pnr);
char			***ft_put_rpieces(char *file);
void			ft_convert_letter(char ***r_piece);
int				ft_check_sharp(char **pattern);
int				ft_ifplace(t_map *mymap, char **pattern, size_t x, size_t y);
t_map			*ft_place(t_map *mymap, char **pattern, size_t x, size_t y);
t_map			*ft_toplace(t_map *mymap, char **pattern, size_t x, size_t y);
t_map			*ft_rm_pattern(t_map *mymap,
						char **pattern, size_t x, size_t y);
t_map			*ft_solve(t_map *mymap, char ***all_rpieces, int nb_piece);
int				ft_isempty(char **map);
void			ft_fillit(char ***all_rpieces, int nb_piece);
int				ft_completecheck(char *file, char ***all_rpieces);
int				ft_verif_file(char *file);
#endif
