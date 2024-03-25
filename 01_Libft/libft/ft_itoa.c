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

char *ft_putn(char *ptr, int digits, int num_aux, int is_negative)
{
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
    char *ptr;
    int digits;
    int n_aux;
    int is_negative;

    n_aux = n;
    is_negative = 0;
    if (n < 0)
    {
        n_aux = -n;
        is_negative = 1;
    }   
    digits = ft_digit(n_aux);
    if (is_negative)
        digits++;
    ptr = ft_calloc(digits + 1, sizeof(char));
    if (!ptr)
        return (NULL);
    ptr = ft_putn(ptr, digits, n_aux, is_negative);
    return (ptr);
}


int main()
{
    char *str;
    int n = 534578;
    str = ft_itoa(n);
    printf("%d\n%s\n", n, str);
    return 0;
}