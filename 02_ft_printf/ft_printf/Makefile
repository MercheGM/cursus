CC = gcc
CFLAGS = -Wall -Werror -Wextra -Ilibft

AR = ar rcs

RM = @rm -f

NAME = libftprintf.a
NAME_LIB = libft.a

PATH_LIB = libft

SRC = 	ft_printf.c \
		ft_printf_hex.c \
		ft_printf_utils.c

OBJ = $(SRC:.c=.o)
#OBJ_BONUS = $(SRC_BONUS:.c=.o)

#BONUS_CACHE = .cache

all : $(NAME) 

$(NAME) : $(OBJ) $(PATH_LIB)/$(NAME_LIB)
	$(AR) $(NAME) $(OBJ)

$(PATH_LIB)/$(NAME_LIB) :
	@$(MAKE) -C libtf
#$(BONUS_CACHE): $(OBJ_BONUS)
#	$(AR) $(NAME) $(OBJ_BONUS)
#	@touch $(BONUS_CACHE)

#bonus: $(BONUS_CACHE)

fclean: clean
	$(RM) $(NAME) 

clean:
	$(RM) *.o


re: fclean all

.PHONY : all bonus clean fclean re