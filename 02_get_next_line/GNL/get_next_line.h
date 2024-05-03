/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:07:18 by mergarci          #+#    #+#             */
/*   Updated: 2024/05/03 15:41:58 by mergarci         ###   ########.fr       */
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

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif
// GNL
char	*get_next_line(int fd);
//char	*get_next_line(int fd);*/
/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
*/

//GNL_UTILS
void	*ft_callocGNL(size_t count, size_t size);

char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int star, size_t len);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpyn(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);


#endif