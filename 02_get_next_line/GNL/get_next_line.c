/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:06:24 by mergarci          #+#    #+#             */
/*   Updated: 2024/05/20 18:23:05 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*str_out;
	size_t		read_bytes;
	static char	*str_aux;
	char		*buffer;
	bool		found_n;
	char		*ptr_aux;

	found_n = false;
	read_bytes = 1;
	if (fd == -1 || BUFFER_SIZE == 0)
	{
		write (1, "Error\n", 6);
		return (NULL);
	}
	buffer = ft_callocGNL(BUFFER_SIZE+1, sizeof(char));
	if (!buffer)
		return (NULL);
	str_out = ft_callocGNL(BUFFER_SIZE+1, sizeof(char));
	if (!str_aux)
		str_aux = ft_callocGNL(BUFFER_SIZE+1, sizeof(char));
	else
	{
		ft_strlcpy(str_out, str_aux, ft_strlen(str_aux)+1);
		found_n = ft_strchrGNL(&str_out, &str_aux, '\n');
	}
	while (read_bytes > 0 && !found_n)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		buffer[read_bytes] = '\0';
		/*if (read_bytes != ft_strlen(buffer)  && BUFFER_SIZE == 1)
			buffer[read_bytes] = '\0';*/
		found_n = ft_strchrGNL(&buffer, &str_aux, '\n');
		ptr_aux = str_out;
		str_out = ft_strjoin(str_out, buffer);
		free(ptr_aux);
		//ptr_aux = NULL;
	}
	free(buffer);
	buffer = NULL;
	return (str_out);
}
/*int	main(void)
{
	int		fd;
	char	*aux = NULL;

	fd = open("test.txt", O_RDWR);
	aux = get_next_line(fd);
	printf("%s", aux);
	free(aux);
 	if (fd != -1)
	{
		aux = get_next_line(fd);
		printf("%s", aux);
		free(aux);
		aux = get_next_line(fd);
		printf("%s", aux);
		free(aux);
		aux = get_next_line(fd);
		printf("%s", aux);
		free(aux);
		aux = get_next_line(fd);
		printf("%s", aux);
		free(aux);

	} 
	close(fd);
	return (1);
}*/
