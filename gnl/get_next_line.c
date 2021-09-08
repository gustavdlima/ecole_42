/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:44:54 by gusalves          #+#    #+#             */
/*   Updated: 2021/09/08 20:14:01 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*treat_the_line(char *backup_buffer)
{
	size_t	i;
	char	*str;
	char	*tmp;

	while (backup_buffer[i] != '\n')
	{
		str[i] = backup_buffer[i];
		i++;
	}
	tmp = ft_strdup(&backup_buffer[i]);
	free(backup_buffer);
	backup_buffer = tmp;
	return(str);
}

char	*line(int fd)
{
	char		*buffer;
	static char	*backup_buffer;
	char		*tmp;
	ssize_t		bytes_read;

	if (fd <= 0 || BUFFER_SIZE < 1)
		return (NULL);
	backup_buffer = ft_strdup("");
	buffer = (char *)malloc((BUFFER_SIZE +1) * sizeof(char));
	while (ft_strchr(buffer, '\n') == NULL)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == 0)
			break ;
		tmp = ft_strjoin(backup_buffer, buffer);
	}
	return (tmp);
}

char	*get_next_line(int fd)
{
	char	*line;
	line =
	printf("%s\n", buffer);
	return (buffer);
}

int	main(void)
{
	char	*str;
	int	fd;

	fd = open("euzequia.txt", O_RDONLY);
		str = get_next_line(fd);
		printf("%s", str);
		free(str);
	// while (1)
	// {
	// 	if (!str)
	// 		break ;
	// }
	// return (0);
 }
