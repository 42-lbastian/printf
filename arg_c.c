/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_c.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bastian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 15:00:40 by Bastian           #+#    #+#             */
/*   Updated: 2020/04/25 18:45:46 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*arg_c(t_printf *list)
{
	char	c;
	t_list	*inter;

	list->toto = 0;
	inter = list->str;
	ft_lstdelone(list->str);
	ft_lstdelone(list->str);
	c = va_arg(list->ap, int);
	list = exec_sp_sc(list, 1, 0);
	ft_lstadd(&(list->str), ft_lstnew(c));
	if (list->sp_type == 1)
		list->str = list->str->next;
	list = exec_sp_sc(list, 1, 1);
	list->str = inter;
	return (list);
}

int			is_v(char c)
{
	if (c == '%')
		return (0);
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (0);
	else
		return (1);
}

t_printf	*arg_pour_2(t_printf *list)
{
	if (list->str->next->content == '*')
	{
		if (list->toto == 0)
			list->sp_int = va_arg(list->ap, int);
		else if (list->toto == 1)
			list->crop = va_arg(list->ap, int);
	}
	if (list->str->next->content == '.')
		list->toto = 1;
	if (list->str->next->content > '0' && list->str->next->content <= '9')
	{
		if (list->toto == 0)
			list->sp_int = list->sp_int * 10 + (list->str->next->content - '0');
		else if (list->toto == 1)
			list->crop = list->crop * 10 + (list->str->next->content - '0');
	}
	if (list->str->next->content == '0')
	{
		if (list->sp_type == 0)
			list->sp_char = '0';
	}
	return (list);
}

t_printf	*arg_pour(t_printf *list)
{
	char c;

	c = ' ';
	ft_lstdelone(list->str);
	while (is_v(list->str->next->content))
	{
		list = arg_pour_2(list);
		if (list->str->next->content == '-')
		{
			list->sp_char = ' ';
			list->sp_type = 1;
		}
		ft_lstdelone(list->str);
	}
	c = list->str->next->content;
	if (c != '%')
		ft_lstdelone(list->str);
	ft_lstdelone(list->str);
	if (list->crop == 0 && list->toto == 1)
		list->sp_int--;
	list = exec_sp_sc(list, 1, 0);
	ft_lstadd(&(list->str), ft_lstnew(c));
	if (list->sp_type == 1)
		list->str = list->str->next;
	list = exec_sp_sc(list, 1, 1);
	return (list);
}
