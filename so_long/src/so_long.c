/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:31:25 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/13 14:21:12 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
	{
		printf("Error!\nThe number of arguments is less than 2.\n");
		exit(1);
	}
	if (ft_strnstr(argv[1], ".ber", ft_strlen(argv[1])) == 0)
	{
		printf("Error!\nInvalid map type.\n");
		exit(2);
	}
	start_functions(argv, &game);
	mlx_hook(game.win_ptr, 3, 1L << 1, key_press, &game);
	mlx_loop_hook(game.mlx_ptr, render_player, &game);
	mlx_hook(game.win_ptr, 17, 0L, destroy, &game);
	mlx_loop(game.mlx_ptr);
	return (0);
}
