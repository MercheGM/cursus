/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:06:24 by mergarci          #+#    #+#             */
/*   Updated: 2024/05/07 13:42:41 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char		*str_out;
	size_t		read_bytes;
	static char	*str_aux;
	char		*buffer;
	bool		found_n;

	found_n = false;
	read_bytes = 1;
	if (fd == -1 || BUFFER_SIZE == 0)
	{
		write (1, "Error\n", 6);
		return (NULL);
	}
	buffer = ft_callocGNL(BUFFER_SIZE, sizeof(char));
	if (!buffer)
		return (NULL);
	str_out = ft_callocGNL(BUFFER_SIZE, sizeof(char));
	if (!str_aux)
		str_aux = ft_callocGNL(BUFFER_SIZE, sizeof(char));
	else
	{
		ft_strlcpy(str_out, str_aux, ft_strlen(str_aux)+1);
		found_n = ft_strchrGNL(&str_out, &str_aux, '\n');
	}
		//ft_strchrGNL(&str_out, &str_aux, '\n');
	//if (str_aux[0] != '\n')

	while (read_bytes > 0 && !found_n)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		found_n = ft_strchrGNL(&buffer, &str_aux, '\n');
		str_out = ft_strjoin(str_out, buffer);
		//read_bytes = read(fd, buffer, BUFFER_SIZE);
		//found_n = ft_strchrGNL(&buffer, &str_aux, '\n');
	}
	if (found_n)
	{
		//str_out = ft_strjoin(str_out, buffer);
	}
	
	//str_out = ft_strjoin(str_out, buffer);
	//else
	//{
		//ft_strchrGNL(&str_out, &str_aux, '\n');
		//str_out = str_aux;
		//str_aux++;
	//}
	free(buffer);
	return (str_out);
}

int	main(void)
{
	int		fd;
	char	*aux = NULL;

/* 	if (!aux)
		aux = malloc (5);
	fd = open("test.txt", O_RDWR);
	while (read (fd, aux, 5))
	{
		printf("%s", aux);
		printf("...");
	} */
	fd = open("test.txt", O_RDWR);
	aux = get_next_line(fd);
	printf("%s", aux);
 	if (fd != -1)
	{
		aux = get_next_line(fd);
		printf("%s", aux);
		aux = get_next_line(fd);
		printf("%s", aux);
		aux = get_next_line(fd);
		printf("%s", aux);
		aux = get_next_line(fd);
		printf("%s", aux);
 		/*while (aux)
		{
			
			printf("%s", aux);
			aux = get_next_line	(fd);
		} */
	} 
	close(fd);
	return (1);
}
