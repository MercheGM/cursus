/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:56:36 by mergarci          #+#    #+#             */
/*   Updated: 2024/02/29 22:02:35 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_isspace(char c)
{
	if ((c == '\t') || (c == '\n') || (c == '\v') || (c == '\f')
		|| (c == '\r') || (c == ' '))
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	cont_neg;
	int	result;

	i = 0;
	cont_neg = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]))
			i++;
		if (str[i] == '-')
			cont_neg++;
		if (str[i] >= '0' && str[i] <= '9')
			break ;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (cont_neg % 2 != 0)
		result = -result;
	return (result);
}

/*int main(void)
{
	char str[] = " ---+--+1234ab567";
	printf("%d\n", ft_isspace('c'));
	printf("Resultado de \"%s\" con la funcion atoi: %d\n", str, atoi(str));
	printf("Resultado de \"%s\" con la func ft_atoi: %d\n", str, ft_atoi(str));
	
	return (0);
}*/
