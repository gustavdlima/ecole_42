/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:31:25 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/09 18:38:07 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_functions(t_game *game)
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

int	main()
{
	t_game	game;

	game.mlx_ptr = mlx_init();
	
	init_functions(&game);
	map(&game);
	map_walk(&game);
	matrix_validation(&game);
	window_start(&game);
	img_start(&game);
	
	mlx_hook(game.win_ptr, 3, 1L << 1, key_press, &game);
	mlx_loop_hook(game.mlx_ptr, render_player, &game);
	mlx_loop(game.mlx_ptr);
	return (0);
}