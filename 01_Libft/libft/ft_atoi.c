/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:56:36 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/22 15:02:30 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if ((c == '\t') || (c == '\n') || (c == '\v') || (c == '\f')
		|| (c == '\r') || (c == ' '))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	cont_neg;
	int	result;

	i = 0;
	cont_neg = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (i < 2 && (ft_isspace(str[i]) || str[i] == '-'))
		{
			if (str[i] == '-')
				cont_neg = 1;
		}
		else
		{
			if (!ft_isdigit(str[i]))
				break ;
			result = result * 10 + str[i] - '0';
		}
		i++;
	}
	if (cont_neg)
		result = -result;
	return (result);
}

/*int main(void)
{
	char str[] = " ---+--+1234ab567";
	printf("Resultado de \"%s\" con la funcion atoi: %d\n", str, atoi(str));
	printf("Resultado de \"%s\" con la func ft_atoi: %d\n", str, ft_atoi(str));
	
	return (0);
}*/
