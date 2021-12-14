/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:36:40 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/13 14:18:09 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map(char *argv, t_game *game)
{
	int		fd;
	char	*temp;
	char	*line;

	fd = open(argv, O_RDONLY);
	if (fd < 0)
	{
		printf("Fd is less than 0.\n");
		exit(5);
	}
	temp = ft_strdup("");
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		temp = strjoin_free(temp, line);
		free(line);
		game->row++;
	}
	game->map = ft_split(temp, '\n');
	game->col = ft_strlen(game->map[0]);
	free(temp);
}
