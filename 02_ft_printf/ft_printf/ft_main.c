/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:19:53 by mergarci          #+#    #+#             */
/*   Updated: 2025/01/21 20:52:06 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	main(void)
{
	
	/*char c = 'Z';
	char *s = "sevia";
	int uint = -1233;
	int decimal = -1885;*/
	//);
	//int cont_printf = printf("(c): %c, (s): %s, (p): %p, (d): %d, (i): %i , (u): %u, (x): %x, (X): %X, porcentaje %%\n", c, s, &s,decimal, uint, uint, decimal, decimal); //26 caracteres +22 caracteres 
	//int cont_ft_printf = ft_printf("(c): %c, (s): %s, (p): %p, (d): %d, (i): %i , (u): %u, (x): %x, (X): %X, porcentaje %%\n", c, s, &s,decimal, uint, uint, decimal, decimal);

	//int cont_printf = printf("(d): %d, (i): %i , (u): %u, (x): %x, (X): %X\n", decimal, uint, uint, decimal, decimal); 
	//int cont_ft_printf = ft_printf("(d): %d, (i): %i , (u): %u, (x): %x, (X): %X\n", decimal, uint, uint, decimal, decimal);

	int cont_printf = 0;
	int cont_ft_printf = 0;
	//while (decimal != 520)
	//{
		//cont_printf = printf("(p): %p, (x): %x, (X): %X\n", &s, decimal, decimal); 
		//cont_ft_printf = ft_printf("(p): %p, (x): %x, (X): %X\n", &s, decimal, decimal);
		//cont_printf = printf("%d%d%d%d%d", 1, -2, 3, -4, 5); 
		cont_ft_printf = ft_printf("%d%d%d%d%d", 1, -2, 3, -4, 5);
		//printf("******1: %d ********\n******2: %d ********\n\n", cont_printf, cont_ft_printf);
	//	decimal--;
	//}
(void)cont_ft_printf;
(void)cont_printf;
	return (0);
}