NAME = libft.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

LDFLAGS = -L

LDLIBS = -lft

HDDIRS = -I includes/

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_isspace.c ft_memcpy.c ft_memccpy.c \
ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c ft_strcat.c \
ft_strchr.c ft_strcmp.c ft_strdup.c ft_strlcat.c ft_strlen.c \
ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnstr.c ft_strrchr.c \
ft_strstr.c ft_tolower.c ft_toupper.c

OBJ = $(SRC:.c=.o)

$(NAME): Users/cristina/42/libft/libft.h
	$(CC) $(CFLAGS) -c $(SRC) $(HDDIRS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean flean
