/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:31:39 by lbastian          #+#    #+#             */
/*   Updated: 2020/04/20 13:53:31 by Bastian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

typedef struct		s_list
{
	char			content;
	struct s_list	*next;
}					t_list;

typedef struct		s_printf
{
	int		error;
	char	sp_char;
	int		sp_int;
	int		sp_type;
	t_list	*str;
	va_list	ap;
	int		crop;
	char	toto;
	char	neg_type;
	char	is_crop_here;
}					t_printf;

int					ft_printf(const char *str, ...);
t_printf			*ft_parse(t_printf *list);
void				print_list(t_list *str);
void				ft_putchar(char c);
size_t				ft_strlen(char *str);
size_t				ft_intlen(long nb);
unsigned long long	ft_hexlen(unsigned long long nb);
int					ft_recursive_power(int nb, int power);
char				*ft_strdup(char *s1);
int					check_error(t_printf *list);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstclear(t_list **lst);
void				ft_lstdelone(t_list *list);
t_list				*ft_lstnew(char	content);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *list);
void				ft_lstadd(t_list **alst, t_list *new);
t_printf			*arg_s(t_printf *list);
t_printf			*arg_c(t_printf *list);
t_printf			*arg_pour(t_printf *list);
t_printf			*arg_d(t_printf *list);
t_printf			*arg_u(t_printf *list);
t_printf			*arg_x(t_printf *list, char *sequence);
t_printf			*arg_p(t_printf *list);
t_printf			*apx(t_printf *list, unsigned long long
result, char *s, int size_hex);
t_printf			*arg_sp(t_printf *list);
t_printf			*exec_sp_sc(t_printf *list, int size, int fact);
t_printf			*exec_sp_dixp(t_printf *list, int size, int fact);
t_printf			*arg_nsp(t_printf *list);
t_printf			*arg_as(t_printf *list);
t_printf			*arg_as_n(t_printf *list);
t_printf			*arg_d_as(t_printf *list);
t_printf			*arg_crop(t_printf *list);
t_printf			*arg_d_as_crop(t_printf *list);
t_printf			*arg_as_crop(t_printf *list);
t_printf			*arg_as_z(t_printf *list);

#endif
