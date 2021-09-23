/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:41:47 by gusalves          #+#    #+#             */
/*   Updated: 2021/09/16 21:14:48 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int ft_printf(int tst, ...)
{
	va_list args;

	va_start(args, tst);
	
	int	value;
	int	i = 0;
	
	while (i < tst)
	{	
		value = va_arg(args, int);
		printf("%d: %d\n", i, value);
		i++;
	}
	va_end(args); 
	return (0);
}


int main ()
{
	ft_printf(3, 1, 2, 3);
}


