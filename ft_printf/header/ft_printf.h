/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:41:51 by gusalves          #+#    #+#             */
/*   Updated: 2021/10/12 01:21:03 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

# include "../libft/libft.h"

int	ft_printf(const char *format, ...);
int	find_type(const char *format, va_list args);
int	format_id(const char *format, va_list args);
//flags
int	c_flag(int x);
int	s_flag(char *str);
int	p_flag(size_t n);
int	d_and_i_flag(int n);
int	u_flag(unsigned int n);
int	x_flags(unsigned int n, char format);
//utils
int	size_of_hexa(size_t	n);
#endif
