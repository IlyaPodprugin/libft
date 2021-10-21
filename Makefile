NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC_FILES = ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			test.c
OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) -o $(NAME) $(FLAGS) $(SRC_FILES) 

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
