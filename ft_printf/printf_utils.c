/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 01:47:32 by gusalves          #+#    #+#             */
/*   Updated: 2021/10/08 01:50:42 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int size_of_hexa(size_t	n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 16;
		size++;
	}
	return (size);
}
