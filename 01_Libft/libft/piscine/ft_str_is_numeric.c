/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:29:58 by mergarci          #+#    #+#             */
/*   Updated: 2024/02/21 18:01:50 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_numeric(char *str)
{
	int		result;
	int		i;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			result = 0;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	char	str[40] = "1234a";

	printf("La cadena es: %s\n", str);
	printf("El resultado de la funcion es: %d\n", ft_str_is_numeric(str));
	return (0);
}*/
