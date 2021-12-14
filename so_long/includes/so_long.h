/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:59:08 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/12 21:24:08 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h"
# include <mlx.h>
# include <stdio.h>

// structs

typedef struct s_img {
	void	*wall;
	void	*floor;
	void	*player;
	void	*exit;
	void	*collectible;
	int		height;
	int		width;
}				t_img;

typedef struct s_game {
	void	*mlx_ptr;
	void	*win_ptr;
	char	**map;
	int		row;
	int		col;
	int		i_player;
	int		x_player;
	int		y_player;
	int		i_collectible;
	int		i_exit;
	int		end_game;
	int		moves;
	t_img	img;
}				t_game;

// define
# define IMG_FLOOR			"./img/floor.xpm"
# define IMG_WALL			"./img/wall.xpm"
# define IMG_EXIT			"./img/portal.xpm"
# define IMG_COLLECTIBLE	"./img/object.xpm"
# define IMG_PLAYER 		"./img/player.xpm"

# define KEY_ESC	65307
# define KEY_A		97
# define KEY_D		100
# define KEY_Q		113
# define KEY_S		115
# define KEY_W		119

# define SPRITE_SIZE 36

// init
void	start_var(t_game *game);
void	start_functions(char **argv, t_game *game);

//map
void	map(char *argv, t_game *game);
void	map_check(t_game *game);
void	check_objects(t_game *game, char c, int x, int y);
void	matrix_check(t_game *game);
void	wall_check(t_game *game);

// window
void	window_start(t_game *game);

// image
void	img_start(t_game *game);
int		img_render(t_game *game);
int		render_player(t_game *game);
void	put_img(t_game *game, char c, int x, int y);

// move
int		key_press(int keycode, t_game *game);
void	move_player(int keycode, t_game *game, int row, int col);
int		move_check(int keycode, t_game *game, int row, int col);

// utils
int		destroy(t_game *game);
void	msg_out(char *c, t_game *game);
void	free_map(t_game *game);
char	*strjoin_free(char *s1, char const *s2);

#endif
