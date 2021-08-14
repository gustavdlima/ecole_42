/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 21:21:45 by gusalves          #+#    #+#             */
/*   Updated: 2021/08/13 23:01:19 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int n)
{
	size_t	i;

	i = 0;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static int	isabs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void	revalue(char *number)
{
	size_t	start;
	size_t	end;
	char	aux;

	start = 0;
	end = ft_strlen(number) - 1;
	while (start < end)
	{
		aux = number[start];
		number[start] = number[end];
		number[end] = aux;
		end--;
		start++;
	}
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*string;
	size_t	is_n;
	size_t	count;

	count = intlen(n);
	is_n = (n < 0);
	if (n == 0)
		return (ft_strdup("0"));
	string = ft_calloc((sizeof(char) + 1), (count + is_n));
	if (!string)
		return (0);
	size = 0;
	while (n != 0)
	{
		string[size++] = '0' + isabs(n % 10);
		n /= 10;
	}
	if (is_n)
		string[size] = '-';
	revalue(string);
	return (string);
}
