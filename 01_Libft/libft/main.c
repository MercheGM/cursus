/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:37:17 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/11 16:46:28 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;

	c = 81;
	printf("valor de isalpha: %d\n", isalpha(c));
	printf("valor de ft_isalpha: %d\n", ft_isalpha(c));
	c = 49;
	printf("valor de isdigit: %d\n", isalpha(c));
	printf("valor de ft_isdigit: %d\n", ft_isdigit(c));
	
	return 1;
}
