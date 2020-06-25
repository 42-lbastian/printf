/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:42:11 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/24 10:17:34 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_printf	*arg_sp_int(t_printf *list)
{
	while ((list->str->next)->content >= '0'
			&& (list->str->next)->content <= '9')
	{
		if (list->sp_int == 0)
			list->sp_int = (list->str->next)->content - '0';
		else
			list->sp_int = (list->sp_int * 10) +
				((list->str->next->content) - '0');
		ft_lstdelone(list->str);
	}
	return (list);
}

static t_printf	*arg_sp_n(t_printf *li)
{
	li->sp_char = ' ';
	li->sp_type = 1;
	while (li->str->next->content == '-')
		ft_lstdelone(li->str);
	return (li);
}

t_printf		*arg_sp(t_printf *list)
{
	t_list	*inter;

	list->sp_int = 0;
	inter = list->str;
	if (list->sp_type != 1)
		list->sp_type = 0;
	list->str = list->str->next;
	if (((list->str->next)->content) &&
	(list->str->next)->content == '0')
	{
		if (list->sp_type != 1)
			list->sp_char = '0';
		while (((list->str->next)->content) &&
		(list->str->next)->content == '0')
			ft_lstdelone(list->str);
		if (list->str->next->content == '-')
			list = arg_sp_n(list);
	}
	else
		list->sp_char = ' ';
	if (((list->str->next)->content) && (list->str->next)->content == '*')
		list = arg_as_z(list);
	list = arg_sp_int(list);
	list->str = inter;
	return (list);
}

t_printf		*exec_sp_sc(t_printf *list, int size, int flag)
{
	int inter;

	inter = size;
	if (list->toto != 0 && size != 0 && list->crop < size)
		inter = list->crop;
	size -= (list->crop);
	if (flag == 0)
		list->sp_int -= inter;
	while (list->sp_int > 0 && flag == list->sp_type)
	{
		ft_lstadd(&(list->str), ft_lstnew(list->sp_char));
		list->str = (list->str)->next;
		list->sp_int--;
	}
	if (flag == 1)
	{
		list->crop = 0;
		list->sp_int = 0;
		list->sp_type = 0;
		list->sp_char = ' ';
	}
	return (list);
}
