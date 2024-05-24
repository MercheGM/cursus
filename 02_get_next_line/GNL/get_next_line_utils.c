/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:06:53 by mergarci          #+#    #+#             */
/*   Updated: 2024/05/24 13:32:22 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	ptr = (char *)ft_calloc_gnl(len + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	else
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		if (i < ft_strlen(src))
			return (ft_strlen(src));
	}
	return (i);
}

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (s[cont] != '\0')
		cont++;
	return (cont);
}

char	*ft_substr(char const *s, unsigned int star, size_t len)
{
	char			*ptr;
	unsigned int	len_src;

	if (!s)
		return (NULL);
	len_src = (unsigned int)ft_strlen(s);
	if (len > len_src)
		len = len_src - star;
	if (len_src < star || len_src == 0)
		return (ft_strdup(""));
	if (star + len == len_src + 1)
		len--;
	ptr = (char *)ft_calloc_gnl(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	if ((star < len || (star + len) <= len_src + 1))
	{
		while (star--)
			s++;
		ft_strlcpy(ptr, s, len + 1);
		return (ptr);
	}
	return (ptr);
}
/*void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cont;
	unsigned char	*ptr;

	ptr = b;
	cont = 0;
	while (cont < len)
		ptr[cont++] = (unsigned char)c;
	return (b);
}*/

/*bool	ft_strchr_gnl(char **s, char **dst, int c)
{
	bool			found_char;
	char			*ptr_aux;
	int				cont;

	ptr_aux = *s;
	cont = 0;
	found_char = false;
	while (ptr_aux[cont] != '\0')
	{
		if (ptr_aux[cont] == (unsigned char)c)
		{
			found_char = true;
			break ;
		}
		cont++;
	}
	if (*dst != NULL)
		*dst = ft_memfree(*dst);
	if (!found_char)
		*dst = ft_strdup("");
	else
	{
		*s = ft_substr(*s, 0, ++cont);
		*dst = ft_strdup(&ptr_aux[cont]);
		ptr_aux = ft_memfree(ptr_aux);
	}
	return (found_char);
}*/

bool	ft_strchr_gnl(char **s, char **dst, int c)
{
	char	*ptr_aux;
	int		cont;

	ptr_aux = *s;
	cont = 0;
	while (ptr_aux[cont] != '\0' && ptr_aux[cont] != (unsigned char)c)
		cont++;
	if (*dst != NULL)
		*dst = ft_memfree(*dst);
	if (ptr_aux[cont] == '\0')
	{
		*dst = ft_strdup("");
		return (false);
	}
	else
	{
		*s = ft_substr(*s, 0, ++cont);
		*dst = ft_strdup(&ptr_aux[cont]);
		ptr_aux = ft_memfree(ptr_aux);
	}
	return (true);
}
