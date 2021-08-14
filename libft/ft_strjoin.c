/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 16:59:53 by gusalves          #+#    #+#             */
/*   Updated: 2021/08/13 17:54:02 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *prefix, char const *sufix)
{
	char	*aux;
	size_t	size;

	size = (ft_strlen(prefix) + ft_strlen(sufix) + 1);
	aux = malloc(sizeof(char) * size);
	if (!aux)
		return (0);
	ft_strlcpy(aux, prefix, (ft_strlen(prefix) + 1));
	ft_strlcat(aux, sufix, size);
	return (aux);
}
