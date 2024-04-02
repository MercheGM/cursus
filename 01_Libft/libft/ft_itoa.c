/* ************************************************************************** */
<<<<<<< HEAD
/*																			*/
/*														:::	  ::::::::   */
/*   ft_itoa.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/25 18:01:44 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/03/25 18:01:44 by mergarci		 ###   ########.fr	   */
/*																			*/
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:01:44 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/25 18:01:44 by mergarci         ###   ########.fr       */
/*                                                                            */
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(int nb)
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

static char *ft_strnbr(int digits, int num_aux, int is_negative, int is_overflow)
{
<<<<<<< HEAD
	char	*ptr;
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
		return (ft_strnbr(10, 2147483647, 1, 1));
=======
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
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}


/*int main()
{
<<<<<<< HEAD
	char *str;
	int n = 2147483648;
	str = ft_itoa(n);
	printf("%d\n%s\n", n, str);
	return 0;
=======
    char *str;
    int n = 2147483648;
    str = ft_itoa(n);
    printf("%d\n%s\n", n, str);
    return 0;
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}*/