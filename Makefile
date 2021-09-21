NAME = fractol
SRCS = $(shell find "." -d 1 -name "*c")
OBJS = ${SRCS:.c=.o}
LIBFT = ./Libft/libft.a
CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
AR = ar csr
FC = ./fractol

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@

# fractol :
# 	./fractol

$(NAME): $(OBJS)
	$(CC) -lmlx -framework OpenGL -framework AppKit *.c -o ${NAME}

all : ${NAME}
	./fractol

clean :
	#${NAME}
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re .c.o