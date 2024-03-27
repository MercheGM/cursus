/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:01:44 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/25 18:01:44 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char *ft_strnbr(int digits, int num_aux, int is_negative, int is_overflow)
{
    char    *ptr;
    ptr = ft_calloc(digits + 1, sizeof(char));
    if (!ptr)
        return (NULL);
    if (is_overflow)
    {
        return ("-2147483648");
    }
    while (digits >= 0)
    {
        if (digits == 0 && is_negative)
            ptr[0] = '-';
        digits--;
        ptr[digits] = num_aux % 10 + '0';
        num_aux = num_aux / 10;
    }
    return (ptr);
}
char *ft_itoa(int n)
{
    int digits;
    int n_aux;
    int is_negative;
    int is_overflow;

    n_aux = n;
    is_negative = 0;
    is_overflow = 0;
    digits = 0;
    if (n != -2147483648)
    {
        if (n < 0)
        {
            n_aux = -n;
            is_negative = 1;
        }
        if (is_negative)
            digits++;
        digits = ft_digit(n_aux);
        return (ft_strnbr(digits, n_aux, is_negative, is_overflow));
    }
    else
        return (ft_strnbr(10, 2147483648, 1, 1));
}


/*int main()
{
    char *str;
    int n = 2147483648;
    str = ft_itoa(n);
    printf("%d\n%s\n", n, str);
    return 0;
}*/