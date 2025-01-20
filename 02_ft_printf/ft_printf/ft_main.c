/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:19:53 by mergarci          #+#    #+#             */
/*   Updated: 2025/01/20 20:20:36 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	main(void)
{
	
	char c = 'Z';
	char *s = "sevilla";
	int uint = -1233;
	int decimal = 3321;
	(void)c;

	int cont_printf = printf("(c): %c, (s): %s, (p): %p, (d): %d, (i): %i , (u): %u, (x): %x, (X): %X, porcentaje %%\n", c, s, &s,decimal, uint, uint, decimal, decimal); //26 caracteres +22 caracteres 
	int cont_ft_printf = ft_printf("(c): %c, (s): %s, (p): %p, (d): %d, (i): %i , (u): %u, (x): %x, (X): %X, porcentaje %%\n", c, s, &s,decimal, uint, uint, decimal, decimal);

	//int cont_printf = printf("(d): %d, (i): %i , (u): %u, (x): %x, (X): %X\n", decimal, uint, uint, decimal, decimal); 
	//int cont_ft_printf = ft_printf("(d): %d, (i): %i , (u): %u, (x): %x, (X): %X\n", decimal, uint, uint, decimal, decimal);


	//int cont_printf = printf("(p): %p, (x): %x, (X): %X\n", &s, decimal, decimal); 
	//int cont_ft_printf = ft_printf("(p): %p, (x): %x, (X): %X\n", &s, decimal, decimal);

	printf("\n\n******1: %d ********\n******2: %d ********\n", cont_printf, cont_ft_printf);
	return (0);
}