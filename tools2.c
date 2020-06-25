/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:38:19 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/20 16:10:11 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		check_error(t_printf *list)
{
	if (list->error)
	{
		ft_putchar('\n');
		return (0);
	}
	return (1);
}

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_list(t_list *list)
{
	if (list == NULL)
	{
		exit(EXIT_FAILURE);
	}
	list = list->next;
	while (list)
	{
		ft_putchar(list->content);
		list = list->next;
	}
}
