/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:06:24 by mergarci          #+#    #+#             */
/*   Updated: 2024/05/02 15:49:18 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char *get_next_line(int fd)
{
	char		*aux;
	size_t		read_bytes;
	static char	buffer[BUFFER_SIZE];
	
	if (fd == -1 || BUFFER_SIZE == 0)
	{
		write (1, "Error\n", 6);
		return (NULL);
	}
	read_bytes = read(fd, buffer, BUFFER_SIZE);
	//printf("bytes leidos: %zu\n", read_bytes);
	if (!read_bytes)
		return (NULL);
	aux = ft_substr(buffer, 0, ft_strchr(buffer, '\n') - buffer);
	//printf("aux:_%s_\n", aux);
	return (aux);
}

int	main(void)
{
	int		fd;
	char *aux;
	//int cont = 0;
	fd = open("test.txt", O_RDWR);
	
	aux = get_next_line(fd);
	if (fd != -1)
	{
		while (aux)
		{
			printf("_%s_\n", aux);
			aux = get_next_line	(fd);
		}
	}
	close(fd);
	return (1);
}
