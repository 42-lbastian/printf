/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:04:40 by lbastian          #+#    #+#             */
/*   Updated: 2020/02/10 17:37:50 by lbastian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = (*alst)->next;
	(*alst)->next = new;
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!(lst))
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_list	*ft_lstnew(char content)
{
	t_list *list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

int		ft_lstsize(t_list *lst)
{
	int size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
