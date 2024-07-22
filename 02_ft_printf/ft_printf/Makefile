CC = gcc
CFLAGS = -Wall -Werror -Wextra

AR = ar rcs

RM = @rm -f

NAME = libftprintf.a

SRC = 	



OBJ = $(SRC:.c=.o)
#OBJ_BONUS = $(SRC_BONUS:.c=.o)

#BONUS_CACHE = .cache

all : $(NAME)

$(NAME) : $(OBJ) 
	$(AR) $(NAME) $(OBJ)

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