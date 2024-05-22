/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:06:24 by mergarci          #+#    #+#             */
/*   Updated: 2024/05/22 15:43:16 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*str_out;
	ssize_t		read_bytes;
	static char	*str_aux;
	char		*buffer;
	bool		found_n;
	char		*ptr_aux;
	//int a;

	//a = 0;
	found_n = false;
	read_bytes = 1;
	if (fd == -1 || BUFFER_SIZE == 0)
		return (NULL);
	buffer = ft_calloc_gnl(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	str_out = ft_calloc_gnl(BUFFER_SIZE + 1, sizeof(char));
	if (!str_aux)
		str_aux = ft_calloc_gnl(BUFFER_SIZE + 1, sizeof(char));
	else
	{
		ft_strlcpy(str_out, str_aux, ft_strlen(str_aux) + 1);
		found_n = ft_strchr_gnl(&str_out, &str_aux, '\n');
	}
	while (read_bytes > 0 && !found_n)
	{
		//a = read(fd, buffer, BUFFER_SIZE);
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes <= 0 )
			break;
		buffer[read_bytes] = '\0';
		found_n = ft_strchr_gnl(&buffer, &str_aux, '\n');
		ptr_aux = str_out;
		str_out = ft_strjoin(str_out, buffer);
		free(ptr_aux);
	}
	free(buffer);
	buffer = NULL;
	if ((read_bytes == 0 && ft_strlen(str_out) == 0) || read_bytes < 0 )
	{
		free(str_out);
		str_out = NULL;
	}
	return (str_out);
}
int	main(void)
{
	int		fd;
	char	*aux;

	//fd = open("test.txt", O_RDWR);
	fd = 1000;
 	if (fd != -1)
	{
		aux = get_next_line(fd);
		while (aux != NULL)
		{
			printf("%s", aux);
			free(aux);
			aux = get_next_line(fd);
		}
	} 
	close(fd);
	return (1);
}
