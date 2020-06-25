/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:37:06 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/24 09:57:59 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_printf	*init_struct(t_printf *list)
{
	list->sp_int = 0;
	list->toto = 0;
	list->is_crop_here = 0;
	list->error = 0;
	list->crop = 0;
	list->sp_char = ' ';
	list->str = ft_lstnew('_');
	return (list);
}

int				ft_printf(const char *str, ...)
{
	va_list		ap;
	t_printf	*list;
	size_t		i;
	t_list		*str_first;

	if (!(list = malloc(sizeof(t_printf))))
		return (0);
	list = init_struct(list);
	i = 0;
	va_start(ap, str);
	va_copy(list->ap, ap);
	str_first = list->str;
	while (str[i])
	{
		ft_lstadd_back(&(list->str), ft_lstnew(str[i]));
		i++;
	}
	list = ft_parse(list);
	if (list->error == 0)
		print_list(str_first);
	i = ft_lstclear(&(str_first));
	free(str_first);
	free(list);
	return (i - 1);
}
