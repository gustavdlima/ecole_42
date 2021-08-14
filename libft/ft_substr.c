/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 15:13:31 by gusalves          #+#    #+#             */
/*   Updated: 2021/08/14 19:47:39 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	size_t	max_size;
	char	*substring;

	if (!s)
		return (0);
	index = ft_strlen((char *)s);
	if (start < index)
		max_size = ft_mim(ft_strlen(s + start), len);
	else
		return (ft_strdup(""));
	substring = ft_calloc(max_size + 1, sizeof(char));
	if (!substring)
		return (0);
	ft_strlcpy(substring, &s[start], max_size + 1);
	return (substring);
}
