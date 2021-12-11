/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:16:33 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/11 17:45:35 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	start_var(t_game *game)
{
	game->row = 0;
	game->col = 0;
	game->i_player = 0;
	game->i_collectible = 0;
	game->i_exit = 0;
	game->moves = 0;
	game->end_game = 0;
	game->x_player = 0;
	game->y_player = 0;
}

void	start_functions(char **argv, t_game *game)
{
	start_var(game);
	map(argv[1], game);
	map_check(game);
	matrix_check(game);
	window_start(game);
	img_start(game);
}
