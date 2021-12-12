/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:30:20 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/12 18:57:19 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	window_start(t_game *game)
{
	game->win_ptr = mlx_new_window(game->mlx_ptr, game->col * 36,
			game->row * 36, "so_long");
}
