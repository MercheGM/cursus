/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:19:53 by mergarci          #+#    #+#             */
/*   Updated: 2025/01/14 19:49:52 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	main(void)
{
	char *s = "sevilla";
	char c = 'Z';
	int uint = -1233;
	(void)c;
	int cont_printf = printf("Soy MGM: %p, como estas: %x %%\n", &c, uint); //26 caracteres +22 caracteres 
	int cont_ft_printf = ft_printf("Soy MGM: %p, como estas: %x %%\n", &c, uint);

	printf("\n\n******1: %d ********\n******2: %d ********\n", cont_printf, cont_ft_printf);
	return (0);
}