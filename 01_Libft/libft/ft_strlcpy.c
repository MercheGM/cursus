/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:56:45 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/15 16:01:52 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (0);
	else
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (i);
}

/*int	main (void)
{
	char	str[40] = "ABC";
	char	dst0[40] = "abcdef";
	char	dst1[40] = "abcdef";
	int n;
	
	n = 0;
	strlcpy(dst0, str, n);
	ft_strlcpy(dst1, str,n);
	printf("La cadena es: %s\n", str);
	printf("Resultado de strlcpy: %s\n", dst0);
	printf("Resultado de ft_strlcpy: %s\n", dst1);
	printf("diferencia de resultados: %d\n", strcmp(dst0, dst1));
	
	return (0);
}*/
