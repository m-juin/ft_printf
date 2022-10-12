NAME	= libftprintf.a

CC	= gcc

AR	= ar rcs

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

SRCS	= ft_puthexa_fd.c \
		ft_uputnbr_fd.c \
		ft_printf.c

OBJS	= ${SRCS:.c=.o}

.c.o:                                                                           
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): rlibft ${OBJS}
	cp libft/libft.a ./$(NAME)
	${AR} ${NAME}  ${OBJS} 

clean:
	cd libft; make fclean
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

rlibft:
	@cd libft;	make all;

re:	fclean all

.PHONY:
	re fclean clean all rlibft
