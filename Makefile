NAME = libft.a
CC = gcc
OPFLAGS ?= -02
CFLAGS ?= -Wall -Wextra -Werror -MMD
SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			ft_isascii.c ft_isprint.c ft_strlen.c \
			ft_memset.c ft_bzero.c ft_memcpy.c \
			ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c \
			ft_memcmp.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c \
			ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c
OBJ_FILES = $(SRC_FILES:.c=.o)
D_FILES = $(SRC_FILES:.c=.d)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar -crs $(NAME) $?

build:
	$(CC) $(CFLAGS) test.c $(NAME)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME) ./a.out libft.so

re: fclean $(NAME)

.PHONY: all clean fclean re build so

-Include $(D_FILES)