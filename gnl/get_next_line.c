/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:44:54 by gusalves          #+#    #+#             */
/*   Updated: 2021/09/09 22:51:19 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*line_adjustment(char **backup_buffer)
{
	char	*str;
	size_t	i;
	char	*tmp;

	i = 0;
	str = *backup_buffer;
	while ((*backup_buffer)[i] != '\n' && str[i]
			|| (*backup_buffer)[i] != '\0')
	{
		str[i] = (*backup_buffer)[i];
		i++;

	}
	*backup_buffer = ft_strdup(&(*backup_buffer)[i + 1]);
	str[i] = '\0';
	return(str);
}

char	*line_reader(int fd)
{
	char		*buffer;
	static char	*backup_buffer;
	char		*tmp;
	ssize_t		bytes_read;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = 0;
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		if (!backup_buffer)
			backup_buffer = ft_strdup("");
		buffer[bytes_read] = '\0';
		tmp = ft_strdup(backup_buffer);
		free(backup_buffer);
		backup_buffer = ft_strjoin(tmp, buffer);
		free(tmp);
		if (ft_strchr(backup_buffer, '\n'))
			break ;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read == 0 && !*backup_buffer)
		return (NULL);
	return (line_adjustment(&backup_buffer));
}

char	*get_next_line(int fd)
{
	char	*line;

	if (fd <= 0 || BUFFER_SIZE < 1)
		return (NULL);
	line = line_reader(fd);
	return (line);
}

int main(void)
{
    char    *str;
    int        fd;

    fd = open("euzequia.txt", O_RDONLY);
    while(1)
    {
        str = get_next_line(fd);
        if (!str)
            break ;
        printf("%s", str);
        free(str);
    }
    return (0);
}
