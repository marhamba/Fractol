NAME = fractol
SRCS = $(shell find "." -name "*c")
OBJS = ${SRCS:.c=.o}
LIBFT = ./Libft/libft.a
CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
AR = ar csr

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@

$(NAME): $(OBJS)
	$(CC) -lmlx -framework OpenGL -framework AppKit *.c -o $(NAME) && ./fractol

all : ${NAME}

clean :
	#${NAME}
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re .c.o