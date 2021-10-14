/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:56:07 by gusalves          #+#    #+#             */
/*   Updated: 2021/10/13 22:49:49 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	size_t	index;

	index = 0;
	while (index < len)
	{
		if (((unsigned char *)b1)[index] != ((unsigned char *)b2)[index])
			return (((unsigned char *)b1)[index] -
						((unsigned char *)b2)[index]);
		index++;
	}
	return (0);
}
