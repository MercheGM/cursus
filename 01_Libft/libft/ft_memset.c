/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:11:46 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/12 19:07:54 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t cont;

	printf("%zu\n", len);
	cont = 0;
	while (cont < len && b != NULL)
	{
		printf("******");
		printf(" %c ", *(char*)b);
		printf("%lu ******", sizeof(len));
		b = &c;
		cont++;
		//b = b + len;
		printf(" %d \n", b);
	}
	(void)c;
	return (b);
}