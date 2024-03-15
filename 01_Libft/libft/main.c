/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:37:17 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/15 18:04:45 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <memory.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	/*int	c;

	c = 81;
	printf("valor de isalpha: %d\n", isalpha(c));
	printf("valor de ft_isalpha: %d\n", ft_isalpha(c));
	c = 49;
	printf("valor de isdigit: %d\n", isdigit(c));
	printf("valor de ft_isdigit: %d\n", ft_isdigit(c));
	c = 88;
	printf("valor de isalnum: %d\n", isalnum(c));
	printf("valor de ft_isalnum: %d\n", ft_isalnum(c));
	c = 12;
	printf("valor de isascii: %d\n", isascii(c));
	printf("valor de ft_isascii: %d\n", ft_isascii(c));

	c = 55;
	printf("valor de isprint: %d\n", isprint(c));
	printf("valor de ft_isprint: %d\n", ft_isprint(c));
	
	char 	*str = "holi mundito";

	printf("La cadena \"%s\" tiene %zu caracteres con strlen\n", str, strlen(str));
	printf("La cadena \"%s\" tiene %zu caracteres con ft_strlen\n", str, ft_strlen(str));

	char str1[50] = "GeeksForGeeks is for programming geeks.";
	char str2[50] = "GeeksForGeeks is for programming geeks.";
	printf("Before memset(): %s\n", str1);
	printf("Before memset(): %s\n", str2);
	memset(str1 + 1, '-', 8*sizeof(char));
	ft_memset(str2 + 1, '-', 8*sizeof(char));
	printf("After memset():  %s\n", str1);
	printf("After ft_memset():  %s\n", str2);

	char str1[50] = "GeeksForGeeks is for programming geeks.";
	char str2[50] = "GeeksForGeeks is for programming geeks.";
	printf("Before bzero(): %s\n", str1);
	printf("Before ft_bzero(): %s\n", str2);
	memset(str1 + 1, '\0', 6*sizeof(char));
	ft_bzero(str2 + 1, 2*sizeof(char));
	printf("After bzero():  %s\n", str1);
	printf("After ft_bzero():  %s\n", str2);
    c = 0;
    while(c < 20)
        printf("%c", str2[c++]);


	char str[] = "jelou55";
	char dst1[50] = "chaooooooo!";
	char dst2[50] = "chaooooooo!";

	size_t n =ft_strlen(str);
	printf("resul de dst1 de memcpy: %s\n", memcpy(dst1, str, n));
	printf("resul de dst2 de ft_memcpy: %s\n", ft_memcpy(dst2, str, n));
	printf("comparacion: %d =)\n", strcmp(dst1,dst2));


	char str[] = "abcdefghijk";
	char str2[] = "abcdefghijk";
	size_t size = 3;
	int i = 2;
	printf("origen: %s\n", str);
	printf("resul de dst1 de memmove: %s\n", memmove((void *)(str + i), (const void*)str, size));
	printf("resul de dst2 de ft_memmove: %s\n", ft_memmove((void *)(str2 + i), (const void*)str2, size));


	int c = 'a';
	printf("toupper: %c pasa a %c \n", c, toupper(c));
	printf("ft_toupper: %c pasa a %c \n", c, ft_toupper(c));

	int c = 'A';
	printf("tolower: %c pasa a %c \n", c, tolower(c));
	printf("ft_tolower: %c pasa a %c \n", c, ft_tolower(c));



	char	str[40] = "ABC";
	char	dst0[40] = "abcdef";
	char	dst1[40] = "abcdef";
	int n;
	
	n = 10;
	strlcpy(dst0, str, n);
	ft_strlcpy(dst1, str,n);
	printf("La cadena es: %s\n", str);
	printf("Resultado de strlcpy: %s\n", dst0);
	printf("Resultado de ft_strlcpy: %s\n", dst1);
	printf("diferencia de resultados: %d\n", strcmp(dst0, dst1));
*/
	char 			str2[100] = "pqrstuvwxyz";
	char			str1[100] = "abcd";
	char			str3[100] = "abcd";
	size_t fun;
	size_t my;
	unsigned int	m;
	printf("strlen de input: %zu\n",ft_strlen(str2));
	m = 0;
	printf("La cadena src es: %s\n", str2);
	printf("La cadena dst es: %s\n", str1);
	fun = strlcat(str1, str2, m);
	my = ft_strlcat(str3, str2, m);
	printf("Resultado de la funcion es: %lu, %s\n", fun, str1);
	printf("Resultado de mi funcion es: %lu, %s\n", my, str3);
	printf("comparacion funciones: %d\n", strcmp(str1, str3));
	printf("comparacion resultados: %lu\n", fun - my);
	return (0);
}