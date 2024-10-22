CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

SRC = ft_atoi.c ft_putchar_fd.c ft_strlcat.c ft_strtrim.c ft_bzero.c ft_memchr.c ft_putendl_fd.c ft_strlcpy.c ft_substr.c ft_calloc.c

OBJ = $(SRC:.c=.o)

NAME = libft.a

AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
