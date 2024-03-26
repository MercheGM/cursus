/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:43:02 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/26 21:43:02 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char *str;

    str = ft_itoa(n);
    write(fd, str, ft_strlen(str));
}

/*int main(void)
{
    int fd;
    int n = -23456; 
    //char *c = "hola hola";

    //fd = 0;
    fd = open("test.txt", O_TRUNC | O_RDWR | O_CREAT, 0600);
    //printf("%d", fd);
    if (fd >= 0)
        ft_putnbr_fd(n, fd);

    return (0);
}*/