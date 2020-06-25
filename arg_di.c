/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_di.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:39:41 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/24 09:52:05 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_printf	*arg_d_exe(t_printf *list, t_list *inter, long nb, int size)
{
	long i;

	i = 1;
	list = exec_sp_dixp(list, size, 0);
	if (!(nb == 0 && list->crop == 0 && list->toto == 1))
	{
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
		list->str = list->str->next;
	}
	list = exec_sp_dixp(list, size, 1);
	list->str = inter;
	return (list);
}

t_printf		*arg_d(t_printf *list)
{
	long	nb;
	int		size;
	t_list	*inter;

	inter = list->str;
	ft_lstdelone(list->str);
	ft_lstdelone(list->str);
	nb = va_arg(list->ap, int);
	size = ft_intlen(nb);
	if (nb < 0)
		list->sp_int--;
	if (nb == 0 && list->crop == 0 && list->toto == 1)
		size = 0;
	if (list->sp_char == ' ')
		list = exec_sp_dixp(list, size, -1);
	if (list->sp_int == list->crop && list->crop > size)
		list->sp_char = '0';
	if (nb < 0)
	{
		ft_lstadd(&(list->str), ft_lstnew('-'));
		list->str = (list->str)->next;
		nb *= -1;
	}
	return (arg_d_exe(list, inter, nb, size));
}
