/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:21:59 by mergarci          #+#    #+#             */
/*   Updated: 2025/01/20 20:19:50 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_placeholder_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}

int	ft_placeholder_hex(va_list vargs, char type)
{
	char	*str;
	int		num;
	int		n_written;

	n_written = 0;
	num = va_arg(vargs, int);
	str = ft_atoi_hex(num, type);
	ft_putstr_fd(str, 1);
	n_written = ft_strlen(str);
	//str = ft_memfree(str);
	return (n_written);
}

int ft_print_ptr(char *str)
{
	int		n;
	
	n = 0;
	while (str[n])
	{
		ft_putchar_fd(str[n], 1);
		n++;
	}
	return (n);
}
int	ft_placeholder_p(va_list vargs)
{
	int		n_written;
	unsigned long dir_ptr;
	char	*str;

	n_written = 0; 
	dir_ptr = va_arg(vargs, unsigned long );
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	n_written += ft_print_ptr(ft_atoi_hex((dir_ptr), 'x'));
	n_written += 2;
	return (n_written);
}

int	ft_placeholder_d(va_list vargs)
{
	int		n_written;
	char	*str_num;

	str_num = ft_itoa(va_arg(vargs, int));
	n_written = ft_strlen(str_num);
	ft_putstr_fd(str_num, 1);
	free(str_num);
	return (n_written);
}

int	ft_placeholder_s(va_list vargs)
{
	int		n_written;
	char	*s_aux;

	n_written = 0;
	s_aux = va_arg(vargs, char *);
	while (s_aux[n_written])
	{
		ft_putchar_fd(s_aux[n_written], 1);
		n_written++;
	}
	return (n_written);
}

int	ft_placeholder_c(va_list vargs)
{
	int	n_written;

	n_written = 0;
	ft_putchar_fd(va_arg(vargs, int), 1);
	n_written++;
	return (n_written);
}

int	ft_placeholder_u(va_list vargs)
{
	int				n_written;
	unsigned int	num;
	unsigned int	divisor;
	
	n_written = 0;
	divisor = 1;
	num = va_arg(vargs, unsigned int);
	while (num / divisor >= 10) 
		divisor *= 10;
	while (divisor > 0) {
		ft_putnbr_fd(num / divisor, 1);
		num %= divisor;
		divisor /= 10;
		n_written++;
	}
	return (n_written);
}

