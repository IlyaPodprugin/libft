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
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c
OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar -crs $(NAME) *.o

build:
	$(CC) $(FLAGS) test.c $(NAME)
	make clean

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME) ./a.out libft.so

re:
	make build

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC_FILES)
	gcc -nostartfiles -shared -o libft.so $(OBJ_FILES)

.PHONY: all clean fclean re build so
