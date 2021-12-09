/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 20:07:05 by gusalves          #+#    #+#             */
/*   Updated: 2021/12/08 00:54:43 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len_words(char const *str, char delimiter)
{
	size_t	i;

	i = 0;
	while (str[i] != delimiter && str[i])
		i++;
	return (i);
}

static size_t	count_words(char const *str, char delimiter)
{
	size_t	i;
	size_t	aux;

	if (!*str)
		return (0);
	i = 1;
	aux = 0;
	while (str[i])
	{
		if (str[i] != delimiter && str[i])
		{
			aux++;
			while (str[i] != delimiter && str[i])
				i++;
		}
		else
			i++;
	}
	return (aux);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	size_t	n_chars;
	size_t	index;
	char	**string;

	if (!s)
		return (0);
	n_words = count_words(s, c);
	string = (char **)malloc((n_words + 1) * sizeof(char *));
	if (!string)
		return (0);
	index = 0;
	while (index < n_words)
	{
		while (*s && *s == c)
			s++;
		n_chars = count_len_words(s, c);
		string[index] = ft_substr(s, 0, n_chars);
		s += n_chars + 1;
		index++;
	}
	string[index] = 0;
	return (string);
}
