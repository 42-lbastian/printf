/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_x.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:26:50 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/20 13:51:21 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_printf	*arg_x_exe_seq(int *tab, int index, t_printf *list, char *s)
{
	while (index > 0)
	{
		ft_lstadd(&(list->str), ft_lstnew(s[(tab[index - 1] % 16)]));
		list->str = list->str->next;
		index--;
	}
	return (list);
}

t_printf		*arg_x_exe(t_printf *list, char *s, int *tab, long result)
{
	int index;
	int size_hex;

	size_hex = ft_hexlen(result);
	if (result == 0 && list->toto != 0 && list->crop == 0)
		size_hex = 0;
	index = 0;
	list = exec_sp_dixp(list, size_hex, 0);
	if (result == 0 && !(list->toto != 0 && list->crop == 0))
	{
		ft_lstadd(&(list->str), ft_lstnew('0'));
		list->str = list->str->next;
	}
	while (result)
	{
		tab[index] = result % 16;
		index++;
		result /= 16;
	}
	list = arg_x_exe_seq(tab, index, list, s);
	list = exec_sp_dixp(list, size_hex, 1);
	return (list);
}

t_printf		*arg_x(t_printf *list, char *sequence)
{
	long	result;
	size_t	size_hex;
	int		*tab;
	t_list	*inter;

	inter = list->str;
	ft_lstdelone(list->str);
	ft_lstdelone(list->str);
	result = va_arg(list->ap, int);
	if (result > 2147483648)
		list->error = 1;
	if (result < 0)
		result = UINT_MAX - (((result + 1) * -1));
	size_hex = ft_hexlen(result);
	if (result == 0 && list->toto != 0 && list->crop == 0)
		size_hex = 0;
	if (!(tab = malloc(sizeof(int) * size_hex)))
	{
		list->error = 1;
		return (NULL);
	}
	list = arg_x_exe(list, sequence, tab, result);
	free(tab);
	list->str = inter;
	return (list);
}
