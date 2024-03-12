CC = gcc
NAME = libft.a
SRC = 	ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c \
		ft_memset.c
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

re: 

fclean:
	@rm -f *.o $(NAME)

clean:
	@rm -f *.o

.PHONY : fclean