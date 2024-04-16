/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:07:18 by mergarci          #+#    #+#             */
/*   Updated: 2024/04/16 17:44:23 by mergarci         ###   ########.fr       */
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
/*char	*get_next_line(int fd);
char	*get_next_line(int fd);*/

//GNL_UTILS
void	*ft_calloc_GNL(size_t count, size_t size);

#endif