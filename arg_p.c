/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 13:40:17 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/24 10:16:38 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_printf	*px(unsigned long long r, int *tab, t_printf *list, char *s)
{
	int index;

	index = 0;
	while (r)
	{
		tab[index] = r % 16;
		index++;
		r /= 16;
	}
	while (index > 0)
	{
		ft_lstadd(&(list->str), ft_lstnew(s[(tab[index - 1] % 16)]));
		list->str = list->str->next;
		index--;
	}
	return (list);
}

t_printf		*apx(t_printf *l, unsigned long long result, char *s, int sh)
{
	int		*tab;
	int		index;

	index = 0;
	if (result < 0)
		result = UINT_MAX - (((result + 1) * -1));
	if (!(tab = malloc(sizeof(int) * sh)))
	{
		l->error = 1;
		return (NULL);
	}
	if (result == 0)
	{
		ft_lstadd(&(l->str), ft_lstnew('0'));
		l->str = l->str->next;
	}
	l = px(result, tab, l, s);
	free(tab);
	return (l);
}

t_printf static	*arg_p_del(t_printf *list)
{
	ft_lstdelone(list->str);
	ft_lstdelone(list->str);
	return (list);
}

t_printf		*arg_p(t_printf *list)
{
	unsigned long long	p;
	t_list				*inter;
	char				fact;
	int					size;

	fact = 0;
	inter = list->str;
	list = arg_p_del(list);
	p = va_arg(list->ap, unsigned long long);
	size = ft_hexlen(p);
	if ((list->toto == 0) || (p && list->toto == 1 && (list->crop != 0 ||
					(list->sp_int != 0 || (list->sp_int == 0 && p)))))
		fact = 1;
	else
		size--;
	list = exec_sp_dixp(list, size + 2, 0);
	ft_lstadd(&(list->str), ft_lstnew('0'));
	list->str = (list->str)->next;
	ft_lstadd(&(list->str), ft_lstnew('x'));
	list->str = (list->str)->next;
	if (fact)
		list = apx(list, p, "0123456789abcdef", ft_hexlen(p));
	list = exec_sp_dixp(list, size + 2, 1);
	list->str = inter;
	return (list);
}
