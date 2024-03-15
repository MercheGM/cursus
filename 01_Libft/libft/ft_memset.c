/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:11:46 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/15 15:33:51 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cont;
	unsigned char	*ptr;

	ptr = b;
	cont = 0;
	while (cont < len)
		ptr[cont++] = (unsigned char)c;
	return (b);
}

/*int main(void)
{
	char str1[50] = "GeeksForGeeks is for programming geeks.";
	char str2[50] = "GeeksForGeeks is for programming geeks.";
	printf("Before memset(): %s\n", str1);
	memset(str1 + 1, '-', 8*sizeof(char));
	ft_memset(str2 + 1, '-', 8*sizeof(char));
	printf("After memset():  %s\n", str1);
	printf("After ft_memset():  %s\n", str2);
	return (0);
}*/