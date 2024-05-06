/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:06:24 by mergarci          #+#    #+#             */
/*   Updated: 2024/05/06 16:29:40 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char		*str_out;
	size_t		read_bytes;
	static char	*str_aux;
	char		buffer[BUFFER_SIZE];
	bool		flag = false;

	if (fd == -1 || BUFFER_SIZE == 0)
	{
		write (1, "Error\n", 6);
		return (NULL);
	}
	ft_memset(buffer, '\0', BUFFER_SIZE);
	//if (!buffer)
	//	return (NULL);
	(void)read_bytes;
	(void)flag;
	str_out = ft_callocGNL(BUFFER_SIZE, sizeof(char));
	if (!str_aux)
		str_aux = ft_callocGNL(BUFFER_SIZE, sizeof(char));
	else
		str_out = str_aux;
	//read_bytes = ;
	//flag = ft_strchrGNL(buffer, str_aux, '\n');
	//printf("bytes leidos: %zu. flag: %d\n", read_bytes, flag);
 	while (read(fd, buffer, BUFFER_SIZE) > 0 && !ft_strchrGNL(buffer, str_aux, '\n'))
	{
		str_out = ft_strjoin(str_out, buffer);
		printf("str_out: |%s|\n", str_out);

	
		//read_bytes = read(fd, buffer, BUFFER_SIZE);
	} 
	if (str_aux != NULL)
	{
		printf("str_aux: |%s|\n", str_aux);
			//return (str_out);
	}
	//
	//printf("**bytes leidos: %zu\n", read_bytes);
/* 	if (!read_bytes)
	{
		free(str_aux);
		free(buffer);
		return (NULL);
	} */
	/*if (!ft_strlen(str_aux))
		str_out = str_aux;*/
	//flag = ft_strchrGNL(buffer, str_aux, '\n');
	//printf("flag: %d, |%s|\n", flag, str_aux);
	//ft_strlcat(str_out, str_aux, ft_strlen(str_out));
	//str_out = ft_substr(buffer, 0, str_aux - buffer);
	/* if (str_out)
		free (buffer); */
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
	printf(".%s.", aux);
 	if (fd != -1)
	{
 		aux = get_next_line(fd);
		printf("..%s..", aux); 
/* 		aux = get_next_line(fd);
		printf("%s", aux);
		aux = get_next_line(fd);
		printf("%s", aux);
		aux = get_next_line(fd);
		printf("%s", aux); */
/* 		while (aux)ll
		{
			
			printf("%s", aux);
			aux = get_next_line	(fd);
		} */
	} 
	close(fd);
	return (1);
}
