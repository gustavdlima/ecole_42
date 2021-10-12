/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puxX_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 02:42:08 by gusalves          #+#    #+#             */
/*   Updated: 2021/10/12 01:19:54 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	p_flag(size_t n)
{
	char	*buff;
	size_t	size;
	int		rest;
	int		i;

	size = size_of_hexa(n);
	buff = malloc((size + 2) * sizeof(char));
	if (!buff)
		return (0);
	buff[0] = '0';
	buff[1] = 'x';
	i = size;
	while (i)
	{
		rest = n % 16;
		if (rest < 10)
			buff[--i + 2] = 48 + rest;
		else
			buff[--i + 2] = (55 + rest) + 32;
		n = n / 16;
	}
	write(1, buff, size + 2);
	free(buff);
	return (size + 2);
}

int	u_flag(unsigned int n)
{
	unsigned int	i;
	int				size;

	i = n;
	size = 0;
	if (i > 9)
	{
		u_flag(i / 10);
	}
	ft_putchar_fd((i % 10) + '0', 1);
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

int	x_flags(unsigned int n, char format)
{
	int		size;
	int		i;
	char	*buff;
	int		rest;

	size = size_of_hexa(n);
	buff = malloc((size * sizeof(char)));
	if (!buff)
		return (0);
	i = size;
	while (i)
	{
		rest = n % 16;
		if (rest < 10)
			buff[--i] = 48 + rest;
		else if (format == 'x')
			buff[--i] = (55 + rest) + 32;
		else if (format == 'X')
			buff[--i] = 55 + rest;
		n = n / 16;
	}
	write(1, buff, size);
	free(buff);
	return (size);
}
