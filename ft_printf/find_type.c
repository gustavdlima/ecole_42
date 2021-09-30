/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:52:42 by gusalves          #+#    #+#             */
/*   Updated: 2021/09/30 04:48:07 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	format_id(const char *format, va_list args)
{
	int	num_of_char;

	num_of_char = 0;
	if (*format == 'c')
		num_of_char += c_flag(va_arg(args, int));
	// if (format == 's')
	// 	num_of_char += ;
	// if (format == 'p')
	// 	num_of_char += ;
	// if (format == 'd')
	// 	num_of_char += ;
	// if (format == 'i')
	// 	num_of_char += ;
	// if (format == 'u')
	// 	num_of_char += ;
	// if (format == 'x')
	// 	num_of_char += ;
	// if (format == 'X')
	// 	num_of_char += ;
	// if (format == '%')
	// 	num_of_char += ;
	return (num_of_char);
}

int	find_type(const char *format, va_list args)
{
	int		i;
	int		num_of_char;

	i = 0;
	num_of_char = 0;
	while(format)
	{
		if (format[i] == '%')
		{
			i++;
			num_of_char += format_id(format, args);
		}
		else
		{
			write(1, format++, 1);
			num_of_char++;
		}
		i++;
	}
	return (num_of_char);
}
