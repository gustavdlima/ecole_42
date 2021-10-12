/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   csdi%_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 02:41:47 by gusalves          #+#    #+#             */
/*   Updated: 2021/10/12 01:19:43 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	c_flag(int x)
{
	ft_putchar_fd(x, 1);
	return (1);
}

int	s_flag(char *str)
{
	size_t	size;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	size = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (size);
}

int	d_and_i_flag(int n)
{
	char	*str;
	int		size;

	str = ft_itoa(n);
	size = s_flag(str);
	free(str);
	return (size);
}
