/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:40:41 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/20 16:10:36 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*arg_s(t_printf *list)
{
	char	*buf;
	int		i;
	t_list	*inter;

	inter = list->str;
	ft_lstdelone(list->str);
	ft_lstdelone(list->str);
	buf = ft_strdup(va_arg(list->ap, char *));
	i = 0;
	list = exec_sp_sc(list, ft_strlen(buf), 0);
	while (buf[i])
	{
		if ((list->crop > 0 && i >= list->crop) ||
		(list->crop == 0 && list->toto != 0))
			break ;
		ft_lstadd(&(list->str), ft_lstnew(buf[i]));
		list->str = (list->str)->next;
		i++;
	}
	list = exec_sp_sc(list, ft_strlen(buf), 1);
	list->str = inter;
	if (ft_strlen(buf) == 0)
		list->toto = 2;
	free(buf);
	return (list);
}
