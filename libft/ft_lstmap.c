/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:36:16 by gusalves          #+#    #+#             */
/*   Updated: 2021/08/18 15:44:48 by gusalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*new;

	if (!lst)
		return (NULL);
	while(lst)
	{
		new = ft_lstnew(f(new->content));
		if (!lst)
			ft_lstclear(&new, del);
		else
			ft_lstadd_back(&aux, new);
		lst = lst->next;
	}
	return (aux);
}
