/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:02:09 by mergarci          #+#    #+#             */
/*   Updated: 2024/08/22 13:04:30 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_digit(int nb)
{
	int	iter;

	iter = 1;
	while (nb >= 16)
	{
		nb = nb / 16;
		iter++;
	}
	return (iter);
}

/*static unsigned char	*ft_check_upper_lower(unsigned char flags)
{
	if (flags & IS_HEX_LOWER)
		return (HEX_LOWER);
	if (flags & IS_HEX_UPPER)
		return (HEX_UPPER);
}*/

static void	ft_fillbytes(int index, char *s)
{
	while (index)
		s[--index] = HEX[15];
}

static int	ft_convert(int n, char *s, int index, bool is_negative)
{
	int	mod;
	int	num;

	num = n / 16;
	mod = n % 16;
	if (is_negative)
		mod = 15 - mod;
	if (index == 8)
		mod++;
	s[--index] = HEX[mod];
	if (num > 16)
		ft_convert(num, s, index, is_negative);
	else
	{
		if (is_negative)
			num = 15 - num;
		s[--index] = HEX[num];
		if (is_negative && index > 0)
			ft_fillbytes(index, s);
	}
	return (num);
}

void	ft_toupper_str(char *s)
{
	int	index;

	index = 0;
	while (s[index])
	{
		s[index] = ft_toupper(s[index]);
		index++;
	}
}

char	*ft_atoi_hex(int n, char type)
{
	int		digits;
	char	*s;
	bool	is_negative;

	is_negative = false;
	if (n < 0)
	{
		is_negative = true;
		digits = 8;
		n = -n;
	}
	else
		digits = ft_digit(n);
	s = ft_calloc(digits, sizeof(char));
	ft_convert(n, s, digits, is_negative);
	if (type == 'X')
		ft_toupper_str(s);
	return (s);
}
