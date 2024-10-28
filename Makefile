CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

SRC = ft_atoi.c ft_putchar_fd.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_bzero.c ft_memchr.c ft_putendl_fd.c ft_strlcpy.c ft_substr.c ft_calloc.c ft_tolower.c ft_toupper.c ft_strnstr.c ft_strmapi.c ft_strjoin.c ft_striteri.c ft_strdup.c ft_strchr.c ft_putstr_fd.c ft_isprint.c ft_split.c ft_itoa.c

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

NAME = libft.a

AR = ar -rcs

all: $(NAME)

bonus: $(OBJ) $(BONUS_OBJ)
	$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)

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
