/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholders.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:49:45 by mergarci          #+#    #+#             */
/*   Updated: 2025/01/26 18:37:44 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*Print a decimal number*/
int	ft_placeholder_d(va_list vargs)
{
	int		n_written;
	char	*str_num;

	str_num = ft_itoa(va_arg(vargs, int));
	n_written = ft_strlen(str_num);
	ft_putstr_fd(str_num, 1);
	str_num = ft_memfree(str_num);
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
	while (divisor > 0)
	{
		ft_putnbr_fd(num / divisor, 1);
		num %= divisor;
		divisor /= 10;
		n_written++;
	}
	return (n_written);
}

int	ft_placeholder_hex(va_list vargs, char type)
{
	char	*str;
	long	num;
	int		n_written;

	n_written = 0;
	num = va_arg(vargs, long);
	str = ft_atoi_hex(num, type);
	n_written = ft_strlen(str);
	ft_putstr_fd(str, 1);
	str = ft_memfree(str);
	return (n_written);
}
