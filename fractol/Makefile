NAME = fractol
SRCS = $(shell find "." -d 1 -name "*c")
OBJS = ${SRCS:.c=.o}
LIBFT = ./Libft/libft.a
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar csr

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@

$(NAME): $(OBJS)
	$(CC) -Lmlx -lmlx -framework OpenGL -framework AppKit main.c -o $(NAME) && ./fractol

all : ${NAME}

clean :
	${NAME}
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

# compile : ${NAME}
# 	@gcc fractol main.c && ./fractol


.PHONY : all clean fclean re .c.o