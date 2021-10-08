/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 04:26:07 by gusalves          #+#    #+#             */
/*   Updated: 2021/10/08 01:55:55 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main()
{
	char	c;
	char	*s;
	size_t	p;
	int		d;
	int		i;
	unsigned int	u;

	c = 'A';
	s = "string";
	p = 1850;
	d = 500;
	i = -250;
	u = 600;

	ft_printf("%c\n", c);
	ft_printf("%s\n", s);
	ft_printf("%p\n", p);
	ft_printf("%d\n", d);
	ft_printf("%i\n", i);
	ft_printf("%u\n", u);

}
