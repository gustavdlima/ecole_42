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
#include <unistd.h>

int ft_printf(const char *string, ...)
{
	va_list	list;
	size_t	i;	

	i = 0;	
	va_start(list, string);
	
	while (string[i])
	{
		write (1, &string[i], 1);
		i++;
	}

	va_end(list); 
	return (0);
}


int main ()
{
	ft_printf("kkkk testando");
}


