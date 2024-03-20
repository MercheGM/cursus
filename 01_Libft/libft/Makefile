CC = gcc
NAME = libft.a
SRC = 	ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c \
		ft_strchr.c
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

re: 

fclean:
	@rm -f *.o $(NAME) a.out

clean:
	@rm -f *.o

.PHONY : all clean fclean re
