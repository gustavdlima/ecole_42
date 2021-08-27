/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:44:54 by gusalves          #+#    #+#             */
/*   Updated: 2021/08/27 00:25:33 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*tratastring(char *buffer_backup)
{
	size_t	index;
	char	*trash;

	index = 0;
	trash = buffer_backup;
	while (buffer_backup[index] != '\n')
	{
		trash[index] = buffer_backup[index];
		index++;
	}
	trash[index] = '\0';
	return (trash);
}

char	*get_next_line(int fd)
{
	static char	*buffer_backup;
	char		*buffer;
	ssize_t		fd_len;
	int			flag;
	char		*charlinha;

	if (fd < 0 && BUFFER_SIZE < 0)
		return (NULL);
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	flag = 1;
	buffer_backup = ft_strdup("");
	if (ft_strchr(buffer_backup, '\n') == NULL)
	{
		while (flag == 1)
		{
			fd_len = read(fd, buffer, BUFFER_SIZE);
			buffer_backup = ft_strjoin(buffer_backup, buffer);
			if (ft_strchr(buffer_backup, '\n') != 0)
				flag = 0;
		}
	}
	charlinha = tratastring(buffer_backup);
	return (charlinha);
}

int main()
{
	int	fd;
	char *gnl;

	fd = open("euzequia.txt", O_RDONLY);
	gnl = get_next_line(fd);
	printf("%s\n", gnl);

	return (0);
}
