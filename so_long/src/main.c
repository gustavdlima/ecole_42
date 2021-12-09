/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:31:25 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/08 21:00:42 by gusalves         ###   ########.fr       */
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
	img_render(&game);

	mlx_loop_hook(game.mlx_ptr, img_render, &game);
	mlx_loop(game.mlx_ptr);
	return (0);
}