/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:44:50 by gusalves          #+#    #+#             */
/*   Updated: 2021/09/09 23:26:20 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H


# ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *str);

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *prefix, char const *sufix);

char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
