NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCFILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_strcmp.c ft_strcpy.c ft_strlen.c ft_strncmp.c
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

