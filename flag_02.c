/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bastian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 10:17:06 by Bastian           #+#    #+#             */
/*   Updated: 2020/04/20 13:57:03 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_printf	*arg_d_as_z(t_printf *list)
{
	long	nb;
	long	i;
	int		size;

	i = 1;
	nb = va_arg(list->ap, int);
	size = ft_intlen(nb);
	if (nb < 0)
	{
		list->sp_type = 1;
		nb *= -1;
		list->sp_char = ' ';
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

t_printf		*arg_as_z(t_printf *list)
{
	t_list	*inter_list;

	inter_list = list->str;
	ft_lstdelone(list->str);
	list = arg_d_as_z(list);
	list->str = inter_list;
	return (list);
}
