myprog : ft_isalpha.o ft_isdigit.o main.o
	cc -Wall -Werror -Wextra  ft_isalpha.c ft_isdigit.c main.c -o myprog

ft_isalpha.o: ft_isalpha.c libft.h
	cc -c ft_isalpha.c

ft_isdigit.o: ft_isdigit.c libft.h
	cc -c ft_isdigit.c

main.o: main.c libft.h
	cc -c main.c

.PHONY : clean
clean:
	rm -f *.o myprog