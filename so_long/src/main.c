/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:31:25 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/10 17:12:37 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_var(t_game *game)
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

void	init_functions(char **argv, t_game *game)
{
	init_var(game);
	
	map(argv[1], game);
	map_walk(game);
	matrix_validation(game);
	

	window_start(game);
	img_start(game);
}

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc < 2)
		exit (42);
	if (ft_strnstr(argv[1], ".ber", ft_strlen(argv[1])) == 0)
		exit (60);
	game.mlx_ptr = mlx_init();
	init_functions(argv, &game);

	mlx_hook(game.win_ptr, 3, 1L << 1, key_press, &game);
	mlx_loop_hook(game.mlx_ptr, render_player, &game);	
	mlx_hook(game.win_ptr, 17, 0L, destroy, &game);
	mlx_loop(game.mlx_ptr);
	return (0);
}
