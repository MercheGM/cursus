#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
    ft_memset(s, '\0', n);
}
/*
int	main(void)
{
	int	c;
	char str1[50] = "GeeksForGeeks is for programming geeks.";
	char str2[50] = "GeeksForGeeks is for programming geeks.";
	printf("Before bzero(): %s\n", str1);
	printf("Before ft_bzero(): %s\n", str2);
	memset(str1 + 1, '\0', 6*sizeof(char));
	ft_bzero(str2 + 1, 2*sizeof(char));
	printf("After bzero():  %s\n", str1);
	//printf("After ft_bzero():  %s\n", str2);
    c = 0;
    while(c < 20)
        printf("%c", str1[c++]);

	return (0);
}*/