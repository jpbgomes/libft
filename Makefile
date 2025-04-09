NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCFILES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c
OBJFILES = $(SRCFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME) main.o

re: fclean all

test: re
	cc main.c $(CFLAGS) -L. -lft -o main.o && ./main.o
