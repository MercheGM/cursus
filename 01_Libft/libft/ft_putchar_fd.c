/* ************************************************************************** */
<<<<<<< HEAD
/*																			*/
/*														:::	  ::::::::   */
/*   ft_putchar_fd.c									:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/26 20:07:50 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/03/26 20:07:50 by mergarci		 ###   ########.fr	   */
/*																			*/
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:07:50 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/26 20:07:50 by mergarci         ###   ########.fr       */
/*                                                                            */
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
=======
void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}

/*int main(void)
{
<<<<<<< HEAD
	int fd;
	char c;

	c = 'b';
	//fd = 0;
	fd = open("test.txt", O_TRUNC | O_RDWR | O_CREAT, 0600);
	//printf("%d", fd);
	if (fd >= 0)
		ft_putchar_fd(c, fd);

	return (0);
=======
    int fd;
    char c;

    c = 'b';
    //fd = 0;
    fd = open("test.txt", O_TRUNC | O_RDWR | O_CREAT, 0600);
    //printf("%d", fd);
    if (fd >= 0)
        ft_putchar_fd(c, fd);

    return (0);
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}*/