/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:44:11 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/25 12:07:02 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_printf	*ft_parse_flag(t_printf *list)
{
	if ((((list->str)->next)->next)->content == '-')
		list = arg_nsp(list);
	if ((((list->str)->next)->next)->content == '*')
		list = arg_as(list);
	if (((((list->str)->next)->next)->content >= '0') &&
			((((list->str)->next)->next)->content <= '9'))
		list = arg_sp(list);
	if ((((list->str)->next)->next)->content == '.')
		list = arg_crop(list);
	return (list);
}

static t_printf	*ft_parse_arg(t_printf *list)
{
	list = ft_parse_flag(list);
	if ((((list->str)->next)->next)->content == 'c')
		list = arg_c(list);
	else if ((((list->str)->next)->next)->content == 's')
		list = arg_s(list);
	else if ((((list->str)->next)->next)->content == 'd' ||
			(((list->str)->next)->next)->content == 'i')
		list = arg_d(list);
	else if ((((list->str)->next)->next)->content == 'u')
		list = arg_u(list);
	else if ((((list->str)->next)->next)->content == 'x')
		list = arg_x(list, "0123456789abcdef");
	else if ((((list->str)->next)->next)->content == 'X')
		list = arg_x(list, "0123456789ABCDEF");
	else if ((((list->str)->next)->next)->content == 'p')
		list = arg_p(list);
	else
		list = arg_pour(list);
	return (list);
}

t_printf		*ft_parse(t_printf *list)
{
	while (list->str->next && ((list->str)->next)->next)
	{
		if (((list->str)->next)->content == '%')
		{
			if ((((list->str)->next)->next)->content == '%')
				ft_lstdelone(list->str);
			else
				list = ft_parse_arg(list);
		}
		if (list->toto != 0)
			list->toto = 0;
		else
		{
			if (list->str->next)
				list->str = (list->str)->next;
		}
	}
	return (list);
}
