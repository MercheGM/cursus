/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:38:17 by mergarci          #+#    #+#             */
/*   Updated: 2024/02/20 16:46:18 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_uppercase(char *str)
{
	int		result;
	int		i;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			result = 0;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	char	str[40] = "HOLI";

	printf("La cadena es: %s\n", str);
	printf("El resultado de la funcion es: %d\n", ft_str_is_uppercase(str));
	return (0);
}*/
