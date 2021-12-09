/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:30:20 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/09 15:11:00 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	window_start(t_game *game)
{
	game->win_ptr = mlx_new_window(game->mlx_ptr, game->col * 36, game->row * 36, "so_long");
}
