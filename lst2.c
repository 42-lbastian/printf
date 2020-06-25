/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:04:40 by lbastian          #+#    #+#             */
/*   Updated: 2020/02/10 17:37:50 by lbastian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if ((alst) && (*alst))
		ft_lstlast(*alst)->next = new;
	else
		ft_lstadd_front(alst, new);
}
