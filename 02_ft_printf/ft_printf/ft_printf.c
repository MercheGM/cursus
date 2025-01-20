/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:13:29 by mergarci          #+#    #+#             */
/*   Updated: 2025/01/20 19:51:49 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_placeholder(char const *s, int *i, va_list vargs)
{
	int	cont;

	cont = 0;
	if (s[*i + 1] == 'c')
		cont = ft_placeholder_c(vargs);
	else if (s[*i + 1] == 's')
		cont = ft_placeholder_s(vargs);
	else if (s[*i + 1] == 'p')
		cont = ft_placeholder_p(vargs);
		//ft_putchar_fd('p', 1);
	else if (s[*i + 1] == 'd')
		cont = ft_placeholder_d(vargs);
		//ft_putnbr_fd(va_arg(vargs, int), 1);
	else if (s[*i + 1] == 'i')
		cont = ft_placeholder_d(vargs); 
	else if (s[*i + 1] == 'u')
		cont = ft_placeholder_u(vargs);
	else if (s[*i + 1] == 'x')
		cont = ft_placeholder_hex(vargs, 'x');
	else if (s[*i + 1] == 'X')
		cont = ft_placeholder_hex(vargs, 'X');
	else if (s[*i + 1] == '%')
		cont = ft_placeholder_percent();
	*i += 2;
	return (cont);
}

int	ft_printf(char const *s, ...)
{
	int		cont;
	int		i;
	int		j;
	va_list	vargs;
	char	*s_aux;

	i = 0;
	j = 0;
	cont = 0;
	va_start(vargs, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			cont += ft_check_placeholder(s, &i, vargs);
		}
		ft_putchar_fd(s[i], 1);
		i++;
		cont++;
	}
	(void)j;
	(void)s_aux;
	//printf("dentro de mi funcion: %s, %s.", s_aux, ft_itoa(12345));
	va_end(vargs);
	return (cont);
}
