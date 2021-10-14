/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:41:47 by gusalves          #+#    #+#             */
/*   Updated: 2021/10/13 09:27:44 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		num_of_char;

	if (!format)
		return (0);
	num_of_char = 0;
	va_start(args, format);
	num_of_char = find_type(format, args);
	va_end(args);
	return (num_of_char);
}
