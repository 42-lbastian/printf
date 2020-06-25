/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dixp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:42:11 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/24 09:58:46 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_printf	*sp_dixp_crop(t_printf *list, int size, int flag)
{
	while (list->crop > size && flag == 0)
	{
		ft_lstadd(&(list->str), ft_lstnew('0'));
		list->str = (list->str)->next;
		size++;
	}
	return (list);
}

t_printf		*exec_sp_dixp(t_printf *list, int size, int flag)
{
	int	inter_size;

	inter_size = size;
	if (list->crop > size)
		inter_size = list->crop;
	while (list->sp_int > inter_size && (list->sp_type == flag ||
	(list->sp_type == 0 && flag == -1)))
	{
		ft_lstadd(&(list->str), ft_lstnew(list->sp_char));
		list->str = (list->str)->next;
		list->sp_int--;
	}
	if (flag == 0 && list->sp_int < inter_size)
		list->sp_int = 0;
	list = sp_dixp_crop(list, size, flag);
	if (flag == 1)
	{
		list->sp_int = 0;
		list->sp_type = 0;
		list->crop = 0;
		list->sp_char = ' ';
	}
	return (list);
}
