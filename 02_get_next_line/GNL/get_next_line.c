/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:06:24 by mergarci          #+#    #+#             */
/*   Updated: 2024/05/03 16:16:35 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char		*str_out;
	size_t		read_bytes;
	static char	*str_aux;
	char		*buffer;

	if (fd == -1 || BUFFER_SIZE == 0)
	{
		write (1, "Error\n", 6);
		return (NULL);
	}
	buffer = ft_callocGNL(BUFFER_SIZE, sizeof(char));
	if (!buffer)
		return (NULL);
	if (!str_aux)
		str_aux = ft_callocGNL(BUFFER_SIZE, sizeof(char));
	read_bytes = read(fd, buffer, BUFFER_SIZE);
	printf("aqui");
	//printf("**bytes leidos: %zu\n", read_bytes);
	if (!read_bytes)
	{
		free(str_aux);
		free(buffer);
		return (NULL);
	}
	/*if (!ft_strlen(str_aux))
		str_out = str_aux;*/
	str_aux = ft_strchr(buffer, '\n');
	//ft_strlcat(str_out, str_aux, ft_strlen(str_out));
	str_out = ft_substr(buffer, 0, str_aux - buffer);
	/* if (str_out)
		free (buffer); */
	return (str_out);
}

int	main(void)
{
	int		fd;
	char	*aux = NULL;

	if (!aux)
		aux = malloc (5);
	fd = open("test.txt", O_RDWR);
	while (read (fd, aux, 5))
	{
		printf("%s", aux);
		printf("...");
	}
	//aux = get_next_line(fd);
	//printf("%s", aux);
/* 	if (fd != -1)
	{
		aux = get_next_line(fd);
		while (aux)
		{
			
			printf("%s", aux);
			aux = get_next_line	(fd);
		}
	} */
	close(fd);
	return (1);
}
