/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:34:13 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/11 20:18:45 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	wall_check(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	while (game->map[x])
	{
		y = 0;
		while (game->map[x][y])
		{
			if (game->map[0][y] != '1' || game->map[game->row - 1][y] != '1')
				msg_out("I'm not surrounded by 1.", game);
			if (game->map[x][0] != '1' || game->map[x][game->col -1] != '1')
				msg_out("I'm not surrounded by 1.", game);
			y++;
		}
		x++;
	}
}

void	matrix_check(t_game *game)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 0;
	z = ft_strlen(game->map[0]);
	while (game->map[x] != 0)
	{
		y = ft_strlen(game->map[x]);
		if (y != z)
			msg_out("Invalid map.", game);
		x++;
	}
	wall_check(game);
}

void	check_objects(t_game *game, char c, int x, int y)
{
	if (c == 'C')
		game->i_collectible++;
	else if (c == 'P')
	{
		game->i_player++;
		game->x_player = x;
		game->y_player = y;
	}
	else if (c == 'E')
		game->i_exit++;
	else if (c == '0' || c == '1')
		return ;
	else
		msg_out("Has an intruder.", game);
}

void	map_check(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	while (game->map[x])
	{
		y = 0;
		while (game->map[x][y])
		{
			check_objects(game, game->map[x][y], x, y);
			y++;
		}
		x++;
	}
	if (x == y)
		msg_out("Map error! Invalid map.", game);
	if (!game->i_collectible || !game->i_exit || game->i_player != 1)
		msg_out("Missing some objects.", game);
}
