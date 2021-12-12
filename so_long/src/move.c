/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:26:11 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/12 18:34:52 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_check(int keycode, t_game *game, int row, int col)
{
	if (game->map[row][col] == '1')
		return (-1);
	if (game->map[row][col] == 'E' && game->i_collectible == 0)
	{
			game->end_game = 1;
			game->map[game->x_player][game->y_player] = '0';
	}
	else if (game->map[row][col] == 'E')
		return (-1);
	if (game->end_game)
		return (0);
	if (keycode == KEY_W || keycode == KEY_A || keycode == KEY_S
		|| keycode == KEY_D)
	{
		game->moves++;
		printf("Moves: %d\n", game->moves);
		return (1);
	}
	else
		return (0);
}

void	move_player(int keycode, t_game *game, int row, int col)
{
	int	x;
	int	y;
	int	valid;

	x = game->x_player;
	y = game->y_player;
	valid = move_check(keycode, game, row, col);
	if (valid > 0)
	{
		if (game->map[row][col] == 'C')
			game->i_collectible--;
		game->map[x][y] = '0';
		game->map[row][col] = 'P';
		game->x_player = row;
		game->y_player = col;
		render_player(game);
	}
}

int	key_press(int keycode, t_game *game)
{
	int	row;
	int	col;

	row = game->x_player;
	col = game->y_player;
	if (keycode == KEY_W)
		row--;
	else if (keycode == KEY_A)
		col--;
	else if (keycode == KEY_S)
		row++;
	else if (keycode == KEY_D)
		col++;
	else if (keycode == KEY_ESC)
	{
		destroy(game);
	}
	if (game->end_game != 1)
		move_player(keycode, game, row, col);
	return (0);
}
