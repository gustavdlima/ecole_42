/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:41:55 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/11 18:50:32 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	img_start(t_game *game)
{
	game->img.wall = mlx_xpm_file_to_image(game->mlx_ptr, IMG_WALL, &game->img.height, &game->img.width);
	game->img.floor = mlx_xpm_file_to_image(game->mlx_ptr, IMG_FLOOR, &game->img.height, &game->img.width);
	game->img.player = mlx_xpm_file_to_image(game->mlx_ptr, IMG_PLAYER, &game->img.height, &game->img.width);
	game->img.exit = mlx_xpm_file_to_image(game->mlx_ptr, IMG_EXIT, &game->img.height, &game->img.width);
	game->img.collectible = mlx_xpm_file_to_image(game->mlx_ptr, IMG_COLLECTIBLE, &game->img.height, &game->img.width);
}

int	img_render(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	while (game->map[x])
	{
		y = 0;
		while(game->map[x][y])
		{
			if (game->map[x][y] == '1')
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->img.wall, y * 36, x * 36);
			else if (game->map[x][y] == '0')
			 	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->img.floor, y * 36, x * 36);
			else if (game->map[x][y] == 'E')
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->img.exit, y * 36, x * 36);
			else if (game->map[x][y] == 'C')
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->img.collectible, y * 36, x * 36);
			else if (game->map[x][y] == 'P')
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->img.player, y * 36, x * 36);
			y++;
		}
		x++;
	}
	return (0);
}

int	render_player(t_game *game)
{
	img_render(game);
	return (0);
}
