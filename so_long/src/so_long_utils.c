/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:10:29 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/10 17:04:21 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	destroy(t_game *game)
{
	mlx_clear_window(game->mlx_ptr, game->win_ptr);
	mlx_loop_end(game->mlx_ptr);
	mlx_destroy_image(game->mlx_ptr, game->img.floor);
	mlx_destroy_image(game->mlx_ptr, game->img.wall);
	mlx_destroy_image(game->mlx_ptr, game->img.player);
	mlx_destroy_image(game->mlx_ptr, game->img.collectible);
	mlx_destroy_image(game->mlx_ptr, game->img.exit);
	mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	mlx_destroy_display(game->mlx_ptr);
	free(game->mlx_ptr);
}
