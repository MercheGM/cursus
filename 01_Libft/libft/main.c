/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:37:17 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/12 18:54:34 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;

	/*c = 81;
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
	printf("La cadena \"%s\" tiene %zu caracteres con ft_strlen\n", str, ft_strlen(str));*/

	char str1[50] = "GeeksForGeeks is for programming geeks.";
	char str2[50] = "GeeksForGeeks is for programming geeks.";
	printf("Before memset(): %s\n", str1);
	printf("Before memset(): %s\n", str2);
	memset(str1 + 1, '-', 8*sizeof(char));
	ft_memset(str2 + 1, '-', 8*sizeof(char));
	printf("After memset():  %s\n", str1);
	printf("After ft_memset():  %s\n", str2);

	return (0);
}