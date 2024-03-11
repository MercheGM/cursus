/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:09:00 by mergarci          #+#    #+#             */
/*   Updated: 2024/02/20 16:29:14 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_alpha(char *str)
{
	int		result;
	int		i;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				result = 0;
		}
		i++;
	}
	return (result);
}

/*int	main(void)
{
	char	str[40] = "Holi! =)";

	printf("La cadena es: %s\n", str);
	printf("El resultado de la funcion es: %d\n", ft_str_is_alpha(str));
	return (0);
}*/
