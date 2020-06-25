/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:38:19 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/20 16:08:08 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t				ft_intlen(long nb)
{
	size_t	i;
	size_t	j;

	if (nb < 0)
		nb *= -1;
	if (nb == 0)
		return (1);
	i = 0;
	j = 1;
	while (nb && j <= (size_t)nb)
	{
		j *= 10;
		i++;
	}
	return (i);
}

unsigned long long	ft_hexlen(unsigned long long nb)
{
	unsigned long long size;

	size = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= 16;
		size++;
	}
	return (size);
}

int					ft_recursive_power(int nb, int power)
{
	if (power < 0 && !(nb == 1 || nb == -1))
		return (0);
	else if ((power < 0 && power % 2 == -1) && (nb == -1))
		return (-1);
	if (power == 0)
		return (1);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}

static char			*ft_strdup_null(char *dest)
{
	if (!(dest = malloc(sizeof(char) * (6 + 1))))
		return (NULL);
	dest[0] = '(';
	dest[1] = 'n';
	dest[2] = 'u';
	dest[3] = 'l';
	dest[4] = 'l';
	dest[5] = ')';
	dest[6] = '\0';
	return (dest);
}

char				*ft_strdup(char *s1)
{
	size_t	taille;
	int		i;
	char	*dest;

	dest = NULL;
	i = 0;
	if (!s1)
		dest = ft_strdup_null(dest);
	else
	{
		taille = ft_strlen(s1);
		if (!(dest = malloc(sizeof(char) * (taille + 1))))
			return (NULL);
		while (s1[i])
		{
			dest[i] = s1[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
