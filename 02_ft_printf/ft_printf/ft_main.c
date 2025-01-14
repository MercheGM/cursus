/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:19:53 by mergarci          #+#    #+#             */
/*   Updated: 2024/08/22 13:26:38 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	main(void)
{
	char *s = "sevilla";
	char c = 'Z';
	int uint = -1233;
	(void)c;
	int cont_printf = printf("Soy MGM: %ld, como estas: %ld %%\n", sizeof(&s) , sizeof(uint));
	int cont_ft_printf = ft_printf("Soy MGM: %p, como estas: %x %%\n", &c, uint);

	printf("\n\n******1: %d ********\n******2: %d ********\n", cont_printf, cont_ft_printf);
	return (0);
}