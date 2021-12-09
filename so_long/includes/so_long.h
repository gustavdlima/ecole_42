/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:59:08 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/08 21:07:13 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h"
# include <mlx.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

// structs

typedef	struct	s_img {
	void	*wall;
	void	*floor;
	void	*player;
	void	*exit;
	void	*collectible;
	int		height;
	int		width;
}				t_img;

typedef	struct	s_game {
	void	*mlx_ptr;
	void	*win_ptr;
	char	**map;
	int		row;
	int		col;
	int		i_player;
	int		i_collectible;
	int		i_exit;
	t_img	img;
}				t_game;

// define
# define IMG_FLOOR	"./img/floor.xpm"
# define IMG_WALL "./img/wall.xpm"
# define IMG_EXIT "./img/portal.xpm"
# define IMG_COLLECTIBLE "./img/object.xpm"
# define IMG_PLAYER "./img/player.xpm"

# define SPRITE_SIZE 36

// functions
void	init_functions(t_game *game);

//map
void	map(t_game *game);
void	map_walk(t_game *game);
void	validations(t_game *game, char	c);
void	matrix_validation(t_game *game);

//window
void	window_start(t_game *game);

//image
void	img_start(t_game *game);
int		img_render(t_game *game);

#endif