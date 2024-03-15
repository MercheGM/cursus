/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:20:42 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/15 18:05:04 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dst);
	i = 0;
	printf("dstsize: %zu, len_src: %zu, len_dst: %zu... RESTA: %d\n", dstsize, len_src, len_dest, (int)(dstsize - len_dest - 1));
	if (len_dest > dstsize)
		return (dstsize);
	else
	{
		while (*src && i < (dstsize - len_dest - 1))
		{
			dst[len_dest++] = *src++;
		}
		dst[len_dest]= '\0';
	}
	if (len_src > dstsize)
		len_dest = len_src;
	return (len_dest);
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
