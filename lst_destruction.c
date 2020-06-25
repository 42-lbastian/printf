/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_destruction.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:17:56 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/20 13:36:42 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_lstclear(t_list **lst)
{
	int		size;
	t_list	*tmp;

	size = ft_lstsize(*lst);
	while (*lst)
	{
		tmp = (*lst)->next;
		((*lst)->content) = 0;
		free(*lst);
		*lst = tmp;
	}
	return (size);
}

void	ft_lstdelone(t_list *lst)
{
	t_list *temp;

	temp = lst->next;
	lst->next = temp->next;
	free(temp);
}
