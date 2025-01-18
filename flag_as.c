/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_as.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:42:29 by lbastian          #+#    #+#             */
/*   Updated: 2025/01/17 15:53:28 by lbastian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*arg_d_as(t_printf *list)
{
	long	nb;
	long	i;

	i = 1;
	nb = va_arg(list->ap, int);
	if (nb < 0)
	{
		nb *= -1;
		list->sp_type = 1;
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
	list->str = list->str->next;
	return (list);
}

t_printf	*arg_as(t_printf *list)
{
	t_list	*inter_list;

	inter_list = list->str;
	list->str = list->str->next;
	ft_lstdelone(list->str);
	list = arg_d_as(list);
	list->str = inter_list;
	return (list);
}
