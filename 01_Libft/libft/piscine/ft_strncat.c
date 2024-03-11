/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:20:42 by mergarci          #+#    #+#             */
/*   Updated: 2024/02/22 17:27:08 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
		cont++;
	return (cont);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len_dest;
	unsigned int	i;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[len_dest] = src[i];
		++len_dest;
		++i;
	}
	dest[len_dest] = '\0';
	return (dest);
}

/*int	main(void)
{
	char			str1[100] = "Adios";
	char			str3[100] = "Adios";
	char 			str2[100] = "Holii";
	unsigned int	n;

	n = 1;
	printf("La cadena 1 es: %s\n", str1);
	printf("La cadena 2 es: %s\n", str2);
	printf("Resultado de la funcion es: %s\n", strncat(str1, str2, n));
	printf("El resultado de mi funcion es: %s\n", ft_strncat(str3, str2, n));
	return (0);
}*/
