# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

# Source files
SRC = ft_atoi.c ft_putchar_fd.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
      ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putnbr_fd.c ft_strlcat.c \
      ft_strtrim.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_bzero.c ft_memchr.c \
      ft_putendl_fd.c ft_strlcpy.c ft_substr.c ft_calloc.c ft_tolower.c ft_toupper.c \
      ft_strnstr.c ft_strmapi.c ft_strjoin.c ft_striteri.c ft_strdup.c ft_strchr.c \
      ft_putstr_fd.c ft_isprint.c ft_split.c ft_itoa.c

# Bonus files (Linked list functions)
BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_front.c \
            ft_lstdelone.c ft_lstadd_front.c

# Object files
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

# Library name
NAME = libft.a

# Archive command
AR = ar -rcs

# Default target (all)
all: $(NAME)

# Bonus target (includes bonus files)
bonus: $(OBJ) $(BONUS_OBJ)
	$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)

# Create the static library
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Rule to create object files from source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -rf *.o

# Clean up object files and the static library
fclean: clean
	rm -rf $(NAME)

# Rebuild everything (clean + all)
re: fclean all

.PHONY: all clean fclean re bonus

