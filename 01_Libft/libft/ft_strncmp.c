/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strncmp.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/02/21 17:30:29 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/03/21 11:51:38 by mergarci		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		diff;
	size_t	i;

	diff = 0;
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && diff == 0 && i < n)
	{
		diff = ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (diff);
}

/*int	main(void)
{
	char	str2[100] = "holi holaaa";
	char 	str1[100] = "holi hola";
	int n;

	n = 1;
	printf("La cadena 1 es: %s\n", str1);
	printf("La cadena 2 es: %s\n", str2);
	printf("Resultado de la funcion es: %d\n", strncmp(str1,str2,n));
	printf("El resultado de mi funcion es: %d\n", ft_strncmp(str1, str2, n));
	return (0);
}*/
