/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 04:26:07 by gusalves          #+#    #+#             */
/*   Updated: 2021/10/10 09:29:04 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main()
{
	char	c;
	char	*s;
	void	*p;
	int		d;
	int		i;
	unsigned int	u;
	unsigned int	x;
	unsigned int	X;

	c = 'A';
	s = "string";
	p = "0";
	d = 453;
	i = -453;
	u = 2147483647;
	x = 453;
	X = 453;

	printf("%c\n", c);
	ft_printf("%c\n", c);
	printf("%s\n", s);
	ft_printf("%s\n", s);
	printf("%p\n", "0");
	ft_printf("%p\n", "0");
	printf("%d\n", d);
	ft_printf("%d\n", d);
	printf("%i\n", i);
	ft_printf("%i\n", i);
	printf("%u\n", u);
	ft_printf("%u\n", u);
	printf("%x\n", x);
	ft_printf("%x\n", x);
	printf("%X\n", X);
	ft_printf("%X\n", X);
	printf("%%\n");
	ft_printf("%%\n");

}
