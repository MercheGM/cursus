/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:49:18 by mergarci          #+#    #+#             */
/*   Updated: 2024/02/29 21:10:24 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <limits.h>

int	pot10(int potencia)
{
	int	resultado;

	resultado = 1;
	while (potencia > 0)
	{
		resultado = resultado * 10;
		potencia--;
	}
	return (resultado);
}

void	ft_print_num(int iter, int num_aux, bool is_negative, bool is_overflow)
{
	int		coef;
	char	caracter;

	if (!is_overflow)
	{
		if (is_negative)
			write(1, "-", 1);
		while (iter >= 0)
		{
			coef = num_aux / pot10(iter - 1);
			caracter = coef + '0';
			write(1, &caracter, 1);
			num_aux = num_aux - coef * pot10(iter - 1);
			iter--;
		}
	}
	else
		write(1, "-2147483648", 11);
}

int	ft_digit(int nb)
{
	int	iter;

	iter = 1;
	while (nb >= 10)
	{
		nb = nb / 10;
		iter++;
	}
	return (iter);
}

void	ft_putnbr(int nb)
{
	int		digit;
	bool	is_overflow;
	bool	is_negative;
	int		num_aux;

	is_negative = false;
	is_overflow = false;
	num_aux = nb;
	if (nb < 0)
	{
		is_negative = true;
		num_aux = -nb;
	}
	if ((nb == INT_MIN) && is_negative)
	{
		is_overflow = true;
		ft_print_num(10, num_aux, is_negative, is_overflow);
	}
	else
	{
		digit = ft_digit(nb);
		ft_print_num(digit, num_aux, is_negative, is_overflow);
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
