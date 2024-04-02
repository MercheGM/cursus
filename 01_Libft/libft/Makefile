CC = gcc
NAME = libft.a
SRC = 	ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c \
		ft_strdup.c \
		ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c
<<<<<<< HEAD
#SRC_BONUS = ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
=======
SRC_BONUS = ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lst_size-bonus.c \
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdealone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

CFLAGS = -Wall -Werror -Wextra

<<<<<<< HEAD
OBJS = $(SRC:.c=.o)
#OBJS_BONUS = $(SRC_BONUS:.c=.o)
=======
OBJS = $(SRC_BONUS:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2

#all : bonus
all : $(NAME) 

$(NAME) : $(OBJS) 
	$(AR) rcs $(NAME) $(OBJS)

#bonus: $(OBJS) $(OBJS_BONUS)
#	$(AR) rcs $(NAME) $(OBJS) $(OBJS_BONUS)

fclean:
	@rm -f *.o $(NAME) a.out

clean:
	@rm -f *.o

<<<<<<< HEAD
re: fclean all

#.PHONY : all bonus clean fclean re
.PHONY : all clean fclean re
=======
bonus:
	$(NAME) : $(OBJS) $(OBJS_BONUS)
	$(AR) rcs $(NAME) $(OBJS) $(OBJS_BONUS)

.PHONY : clean fclean re
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
