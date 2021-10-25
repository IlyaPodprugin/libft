NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC_FILES = ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c
OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES) build
	$(CC) $(FLAGS) test.c $(NAME)

build:
	ar -crs $(NAME) *.o

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME) ./a.out

.PHONY: all clean fclean re
