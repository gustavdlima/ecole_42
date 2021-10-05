/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:41:51 by gusalves          #+#    #+#             */
/*   Updated: 2021/10/05 01:19:35 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
#include <stdio.h> //TIRA ESSSA PORRA DAQUI
# include "./libft/libft.h"

int	ft_printf(const char *format, ...);
int	find_type(const char *format, va_list args);
int	format_id(const char *format, va_list args);

//flags
int	c_flag(int x);
int	s_flag(char *str);
#endif
