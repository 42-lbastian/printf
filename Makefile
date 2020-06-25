NAME = libftprintf.a

SRCS = arg_c.c arg_di.c arg_p.c arg_s.c arg_u.c arg_x.c flag_0.c flag_02.c dixp.c flag_as.c flag_n.c flag_crop.c ft_printf.c ft_putchar.c lst.c lst2.c lst_destruction.c parse.c tools.c tools2.c

OBJS = ${SRCS:.c=.o}

INCLUDES = ./

HEADERS = ft_printf.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I${INCLUDES}

RM = rm -rf

all:	$(NAME)

$(NAME): ${OBJS} ${HEADERS}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS} ${OBJS_BONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re bonus
