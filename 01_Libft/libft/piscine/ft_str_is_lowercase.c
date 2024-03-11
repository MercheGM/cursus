/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:34:26 by mergarci          #+#    #+#             */
/*   Updated: 2024/02/20 16:37:41 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_lowercase(char *str)
{
	int		result;
	int		i;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			result = 0;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	char	str[40] = "holi";

	printf("La cadena es: %s\n", str);
	printf("El resultado de la funcion es: %d\n", ft_str_is_lowercase(str));
	return (0);
}*/
