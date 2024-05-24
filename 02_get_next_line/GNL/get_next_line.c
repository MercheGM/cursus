/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:06:24 by mergarci          #+#    #+#             */
/*   Updated: 2024/05/24 13:35:22 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc_gnl(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			cont;

	cont = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	while (cont < size)
		ptr[cont++] = '\0';
	return ((void *)ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;
	int		i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	ptr = (char *)ft_calloc_gnl(len_s1 + len_s2 + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	while (len_s1--)
	{
		ptr[i] = s1[i];
		i++;
	}
	len_s1 = i;
	i = 0;
	while (len_s2--)
		ptr[len_s1++] = s2[i++];
	ptr[len_s1] = '\0';
	return (ptr);
}

char	*ft_memfree(char *ptr)
{
	free(ptr);
	return (NULL);
}

char	*ft_read_gnl(int fd, bool found_n, char **str_out, char **str_aux)
{
	ssize_t		read_bytes;
	char		*ptr_aux;
	char		*buffer;

	buffer = ft_calloc_gnl(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (read_bytes > 0 && !found_n)
	{
		//a = read(fd, buffer, BUFFER_SIZE);
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes <= 0)
			break ;
		buffer[read_bytes] = '\0';
		found_n = ft_strchr_gnl(&buffer, str_aux, '\n');
		ptr_aux = *str_out;
		*str_out = ft_strjoin(*str_out, buffer);
		ptr_aux = ft_memfree(ptr_aux);
	}
	buffer = ft_memfree(buffer);
	if ((read_bytes == 0 && ft_strlen(*str_out) == 0) || read_bytes < 0)
	{
		*str_aux = ft_memfree(*str_aux);
		*str_out = ft_memfree(*str_out);
	}
	return (*str_out);
}

char	*get_next_line(int fd)
{
	char		*str_out;
	static char	*str_aux;
	bool		found_n;

	found_n = false;
	if (fd == -1 || BUFFER_SIZE == 0)
		return (NULL);
	str_out = ft_calloc_gnl(BUFFER_SIZE + 1, sizeof(char));
	if (!str_out)
		return (NULL);
	if (!str_aux)
		str_aux = ft_calloc_gnl(BUFFER_SIZE + 1, sizeof(char));
	else
	{
		ft_strlcpy(str_out, str_aux, ft_strlen(str_aux) + 1);
		found_n = ft_strchr_gnl(&str_out, &str_aux, '\n');
	}
	str_out = ft_read_gnl(fd, found_n, &str_out, &str_aux);
	return (str_out);
}
/*int	main(void)
{
	int		fd;
	char	*aux;

	fd = open("test.txt", O_RDWR);
	//fd = 10000;
 	if (fd != -1)
	{
		aux = get_next_line(fd);
		while (aux != NULL)
		{
			printf("%s", aux);
			free(aux);
			aux = get_next_line(fd);
		}
		free(aux);
	} 
	close(fd);
	return (1);
}*/
