/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_crop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:42:11 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/20 13:58:13 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_printf	*arg_crop_final(t_printf *list, t_list *inter_list)
{
	if (list->toto != 0)
	{
		list->toto = 0;
		list->crop = 0;
	}
	else if (list->toto == 0)
	{
		list->toto = 1;
		list->sp_char = ' ';
	}
	list->str = inter_list;
	return (list);
}

t_printf		*arg_crop(t_printf *list)
{
	t_list	*inter_list;

	inter_list = list->str;
	list->str = list->str->next;
	ft_lstdelone(list->str);
	if (list->str->next->content == '*')
		list = arg_as_crop(list);
	while ((list->str->next)->content >= '0'
			&& (list->str->next)->content <= '9')
	{
		if (list->crop == 0)
			list->crop = (list->str->next)->content - '0';
		else
			list->crop = (list->crop * 10) +
				((list->str->next->content) - '0');
		ft_lstdelone(list->str);
	}
	return (arg_crop_final(list, inter_list));
}

t_printf		*arg_d_as_crop(t_printf *list)
{
	long	nb;
	long	i;
	int		size;

	i = 1;
	nb = va_arg(list->ap, int);
	size = ft_intlen(nb);
	if (nb < 0)
	{
		list->toto = 1;
		return (list);
	}
	while ((i - 1) < nb)
		i *= 10;
	i = i / 10;
	while (i > 1)
	{
		ft_lstadd(&(list->str), ft_lstnew(((nb / i) % 10) + '0'));
		list->str = (list->str)->next;
		i = i / 10;
	}
	ft_lstadd(&(list->str), ft_lstnew(((nb / 1) % 10) + '0'));
	return (list);
}

t_printf		*arg_as_crop(t_printf *list)
{
	t_list	*inter_list;

	inter_list = list->str;
	ft_lstdelone(list->str);
	list = arg_d_as_crop(list);
	list->str = inter_list;
	return (list);
}
