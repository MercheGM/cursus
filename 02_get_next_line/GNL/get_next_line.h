/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:07:18 by mergarci          #+#    #+#             */
/*   Updated: 2024/05/24 13:35:10 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//# include <ctype.h>
# include <stdio.h>
//# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>
# include <stdbool.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif
// GNL
void	*ft_calloc_gnl(size_t count, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_memfree(char *ptr);
char	*ft_read_gnl(int fd, bool found_n, char **str_out, char **str_aux);
char	*get_next_line(int fd);

//GNL_UTILS
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int star, size_t len);
bool	ft_strchr_gnl(char **s, char **dst, int c);

#endif