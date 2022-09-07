NAME = libft.a
SRCS = ft_isalpha.c
FLAGS = -Wall -Werror -Wextra
HEADER = libft.h

all: $(NAME)

$(NAME): $(SRCS:.c=.o)
	ar -rc $(NAME) $(SRCS:.c=.o) 

%.o: %.c
	cc -o $@ -c $< $(FLAGS)

norm:
	norminette

clean:
	rm -f $(SRCS:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re