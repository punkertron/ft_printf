SRCS		= ft_printf.c fill_flags.c ft_itoa_new.c utils.c zero_minus.c \
				 print_c.c print_s.c print_di.c print_di2.c print_u.c \
				 print_u2.c print_x.c print_p.c print_per.c

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a
LIBFT		= libft/libft.a
HEADER		= ft_printf.h
HEADER_L	= libft/libft.h

CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -O2
LIBC		= ar rcs

$(NAME):	${OBJS} ${HEADER} ${HEADER_L}
			${MAKE} all -C ./libft
			cp ${LIBFT} ${NAME}
			${LIBC} ${NAME} ${OBJS}

all:		$(NAME)

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

bonus:		all

clean:
			${RM} ${OBJS}
			${MAKE} fclean -C ./libft

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus