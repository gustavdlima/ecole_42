/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cspd%_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 02:41:47 by gusalves          #+#    #+#             */
/*   Updated: 2021/10/05 01:43:15 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	c_flag(int x)
{
	ft_putchar_fd(x, 1);
	return (1);
}

int	s_flag(char *str)
{
	size_t	i;

	i = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return(i);
}

int	p( )
{

}
