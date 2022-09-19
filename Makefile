NAME = libft.a
SRCS = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_inserting_sorting.c \
#
		ft_bzero.c \
		ft_memset.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c 
FLAGS = -Wall -Werror -Wextra
HEADER = libft.h

all: $(NAME)

$(NAME): $(SRCS:.c=.o)
	ar -rc $(NAME) $(SRCS:.c=.o) 

%.o: %.c
	cc -o $@ -c $< $(FLAGS)

norm:
	norminette $(SRCS) $(HEADER)

clean:
	rm -f $(SRCS:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
