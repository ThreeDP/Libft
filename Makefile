NAME 				= 		libft.a

SRCS 				= 		ft_signdetect.c ft_isspace.c ft_islower.c ft_isupper.c \
							ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
							ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
							ft_strlcpy.c ft_strlcat.c  ft_strchr.c ft_strrchr.c ft_strncmp.c \
							ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
							ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
							ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c 
SRCS_BOUNS 			=		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
							ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

FLAGS 				=		-Wall -Werror -Wextra
HEADER 				= 		libft.h

all: $(NAME)

$(NAME): $(SRCS:.c=.o)
	ar -rc $(NAME) $(SRCS:.c=.o) 

%.o: %.c
	cc -o $@ -c $< -I ./ $(FLAGS)

norm:
	norminette $(SRCS) $(HEADER)

clean:
	rm -f $(SRCS:.c=.o) $(SRCS_BOUNS:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(SRCS_BOUNS:.c=.o)
	ar -rc $(NAME) $(SRCS_BOUNS:.c=.o) 

.PHONY: all fclean clean re
