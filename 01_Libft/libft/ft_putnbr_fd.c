/* ************************************************************************** */
<<<<<<< HEAD
/*																			*/
/*														:::	  ::::::::   */
/*   ft_putnbr_fd.c									 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/26 21:43:02 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/03/26 21:43:02 by mergarci		 ###   ########.fr	   */
/*																			*/
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:43:02 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/26 21:43:02 by mergarci         ###   ########.fr       */
/*                                                                            */
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	ft_putnbr_fd(int n, int fd)
{
	char *str;

	str = ft_itoa(n);
	write(fd, str, ft_strlen(str));
=======
void    ft_putnbr_fd(int n, int fd)
{
    char *str;

    str = ft_itoa(n);
    write(fd, str, ft_strlen(str));
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}

/*int main(void)
{
<<<<<<< HEAD
	int fd;
	int n = -2147483648; 

	fd = open("test.txt", O_TRUNC | O_RDWR | O_CREAT, 0600);
	if (fd >= 0)
		ft_putnbr_fd(n, fd);

	return (0);
=======
    int fd;
    int n = -2147483648; 

    fd = open("test.txt", O_TRUNC | O_RDWR | O_CREAT, 0600);
    if (fd >= 0)
        ft_putnbr_fd(n, fd);

    return (0);
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}*/