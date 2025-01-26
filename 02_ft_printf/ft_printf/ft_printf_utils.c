/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:21:59 by mergarci          #+#    #+#             */
/*   Updated: 2025/01/26 19:22:36 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(char *str)
{
	int		n;
	//int		len;

	n = 0;
	while (str[n])
	{
		//printf("....%d, %c \n", n, str[n]);
		ft_putchar_fd(str[n], 1);
		n++;
	}
	return (n);
}

char	*ft_memfree(char *ptr)
{
	free(ptr);
	return (NULL);
}
