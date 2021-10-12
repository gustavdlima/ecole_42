/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:52:42 by gusalves          #+#    #+#             */
/*   Updated: 2021/10/11 23:26:17 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_id(const char *format, va_list args)
{
	int	num_of_char;

	num_of_char = 0;
	if (*format == 'c')
		num_of_char += c_flag(va_arg(args, int));
	if (*format == 's')
		num_of_char += s_flag(va_arg(args, char *));
	if (*format == 'p')
		num_of_char += p_flag(va_arg(args, size_t));
	if (*format == 'd' || *format == 'i')
		num_of_char += d_and_i_flag(va_arg(args, int));
	if (*format == 'u')
		num_of_char += u_flag(va_arg(args, unsigned int));
	if (*format == 'x')
		num_of_char += x_flags(va_arg(args, unsigned int), 'x');
	if (*format == 'X')
		num_of_char += x_flags(va_arg(args, unsigned int), 'X');
	if (*format == '%')
		num_of_char += write(1, "%", 1);
	return (num_of_char);
}

int	find_type(const char *format, va_list args)
{
	int		num_of_char;

	if (!format)
		return (0);
	num_of_char = 0;
	while (*format)
	{
		if (*format == '%' && ft_strchr("cspdiuxX%", format[1]))
		{
			format++;
			num_of_char += format_id(format, args);
		}
		else
		{
			write(1, format, 1);
			num_of_char++;
		}
		format++;
	}
	return (num_of_char);
}
