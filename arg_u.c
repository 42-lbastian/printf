/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_u.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:41:03 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/20 13:50:23 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_printf	*arg_u_exe(t_printf *list, long nb, t_list *inter, int size)
{
	unsigned long i;

	i = 1;
	if (!(nb == 0 && list->crop == 0 && list->toto == 1))
	{
		while ((i - 1) < (unsigned long)nb)
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

t_printf		*arg_u(t_printf *list)
{
	long	nb;
	long	i;
	int		size;
	t_list	*inter;

	inter = list->str;
	ft_lstdelone(list->str);
	ft_lstdelone(list->str);
	i = 1;
	nb = va_arg(list->ap, int);
	if (nb < 0)
		nb = (UINT_MAX - ((nb + 1) * -1));
	size = ft_intlen(nb);
	if (nb == 0 && list->crop == 0 && list->toto == 1)
		size = 0;
	list = exec_sp_dixp(list, size, 0);
	return (arg_u_exe(list, nb, inter, size));
}
