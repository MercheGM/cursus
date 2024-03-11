/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:56:45 by mergarci          #+#    #+#             */
/*   Updated: 2024/02/29 17:30:32 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main (void)
{
	char	str[40] = "ABCDEF";
	char	dst0[40] = "abcdef";
	char	dst1[40] = "abcdef";
	int n;
	
	n = 2;
	strncpy(dst0, str, n);
	ft_strncpy(dst1, str,n);
	printf("La cadena es: %s\n", str);
	printf("Resultado de strncpy: %s\n", dst0);
	printf("Resultado de ft_strncpy: %s\n", dst1);
	printf("diferencia de resultados: %d\n", strcmp(dst0, dst1));
	return (0);
}*/
