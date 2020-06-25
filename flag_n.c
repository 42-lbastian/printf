/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:43:03 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/24 09:58:16 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*arg_nsp(t_printf *list)
{
	t_list *inter;

	inter = list->str;
	list->sp_type = 1;
	list->str = list->str->next;
	while (list->str->next->content == '-')
		ft_lstdelone(list->str);
	list->str = inter;
	return (list);
}
