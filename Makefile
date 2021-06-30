SRCS		= ft_printf.c fill_flags.c ft_itoa_new.c  utils.c \
				 print_c.c print_s.c print_di.c
SRCS_L		= libft/*.c

OBJS		= ${SRCS:.c=.o}
OBJS_L		= ${SRCS_L:.c=.o}

NAME		= libftprintf.a
LIBFT		= libft/libft.a
HEADER		= ft_printf.h
HEADER_L	= libft/libft.h

CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror
LIBC		= ar rcs

$(NAME):	${OBJS} ${OBJS_L} ${HEADER} ${HEADER_L}
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
			${RM} ${NAME} a.exe

re:			fclean all

go:			$(NAME)
			${CC} ${CFLAGS} -g main.c -L. -lftprintf && ./a.exe

.PHONY:		all clean fclean re bonus go