################  COLORS	##################
L_RED			=			'\033[0;31m'
L_REDB			=			'\033[1;31m'
L_WHITE			=			'\033[0;37m'
L_WHITEB		=			'\033[1;37m'
L_YELLOW		=			'\033[0;33m'
L_YELLOWB		=			'\033[1;33m'
L_GREEN			=			'\033[0;32m'
L_GREENB		=			'\033[1;32m'
################ LIBRARY	##################
NAME 			= 			libft.a
################ MANDATORY	##################
SRCS 			=			ft_signdetect.c 	ft_isspace.c 		ft_islower.c 		ft_isupper.c \
							ft_isalpha.c 		ft_isdigit.c 		ft_isalnum.c	\
							ft_isascii.c 		ft_isprint.c		ft_toupper.c	\
							ft_tolower.c		ft_strlen.c 		ft_memset.c		\
							ft_bzero.c 			ft_memcpy.c 		ft_memmove.c 	\
							ft_strlcpy.c 		ft_strlcat.c  		ft_strchr.c		\
							ft_strrchr.c 		ft_strncmp.c 		ft_memchr.c		\
							ft_memcmp.c 		ft_strnstr.c 		ft_atoi.c		\
							ft_calloc.c			ft_strdup.c			ft_substr.c		\
							ft_strjoin.c 		ft_strtrim.c 		ft_split.c		\
							ft_itoa.c 			ft_strmapi.c 		ft_striteri.c	\
							ft_putchar_fd.c 	ft_putstr_fd.c 		ft_putendl_fd.c	\
							ft_putnbr_fd.c 		ft_striteri.c 
################ BONUS  	##################
SRCS_BOUNS 		=			ft_lstnew.c 		ft_lstadd_front.c 	ft_lstsize.c	\
							ft_lstlast.c		ft_lstadd_back.c 	ft_lstdelone.c	\
							ft_lstclear.c 		ft_lstiter.c 		ft_lstmap.c		\
################ OTHERs		##################
FLAGS 			=			-Wall -Werror -Wextra
HEADER 			=	 		libft.h
################ RULES		##################
all: 		$(NAME)

$(NAME): 	$(SRCS:.c=.o)
	@echo		$(L_YELLOWB) Make Bonus Library... $(L_WHITE)
	ar -rc 		$(NAME) $(SRCS:.c=.o)
	@echo		$(L_WHITEB) Result Library! $(L_WHITE)

%.o: 		%.c
	@echo		$(L_WHITEB) Compile Objects... $(L_WHITE)
	cc -o 		$@ -c $< -I ./ $(FLAGS)
	@echo		$(L_WHITEB) End Compile! $(L_WHITE)

norm:
	@echo		$(L_YELLOWB) NORM executing... $(L_WHITE)
	norminette 	$(SRCS) $(HEADER)
	@echo		$(L_WHITEB) END NORM! $(L_WHITE)

clean:
	@echo		$(L_WHITEB) Remove Objects... $(L_WHITE)
	@rm -f 		$(SRCS:.c=.o) $(SRCS_BOUNS:.c=.o)
	@echo		$(L_WHITEB) End Remove! $(L_WHITE)

fclean: 	clean

	@echo		$(L_WHITEB) Remove Exec... $(L_WHITE)
	rm -f 		$(NAME)
	@echo		$(L_WHITEB) End Remove! $(L_WHITE)

re: 		fclean all

bonus: 		$(SRCS:.c=.o) $(SRCS_BOUNS:.c=.o)
	@echo		$(L_YELLOWB) Make Bonus Library... $(L_WHITE)
	ar -rc 		$(NAME) $(SRCS:.c=.o) $(SRCS_BOUNS:.c=.o)
	@echo		$(L_WHITEB) Result Library! $(L_WHITE)

.PHONY: 	all fclean clean re
