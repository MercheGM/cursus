/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:06:24 by mergarci          #+#    #+#             */
/*   Updated: 2024/04/16 17:47:19 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*char *get_next_line(int fd)
{
	
	
}*/

int main (void)
{
	int fd;
	//char *c;
	char *buffer;
	
	fd = open("test.txt", O_RDWR);
	printf("%d, %d\n", fd, BUFFER_SIZE);
	buffer = (char *)ft_calloc_GNL(BUFFER_SIZE, sizeof(char));
	if (!buffer)
		return (0);
	printf("bytes leidos: %zu\n", read(fd, buffer, BUFFER_SIZE));
	printf("%s\n", buffer);
	close(fd);
	return (1);
}