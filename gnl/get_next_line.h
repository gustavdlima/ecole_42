/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:44:50 by gusalves          #+#    #+#             */
/*   Updated: 2021/09/15 22:23:23 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 15
# endif

char	*get_next_line(int fd);

// utils
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *prefix, char const *sufix);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
