/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:06:53 by mergarci          #+#    #+#             */
/*   Updated: 2024/05/03 15:46:06 by mergarci         ###   ########.fr       */
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
	ptr = (char *)ft_callocGNL(len + 1, sizeof(char));
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

size_t	ft_strlcpyn(char *dst, const char *src, size_t dstsize)
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
		//dst[i] = '\n';
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
	while (*s++)
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
	ptr = (char *)ft_callocGNL(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	if ((star < len || (star + len) <= len_src + 1))
	{
		while (star--)
			s++;
		ft_strlcpyn(ptr, s, len + 1);
		return (ptr);
	}
	return (ptr);
}

char	*ft_strchr(const char *s, int c)
{
	int				found_char;
	unsigned char	c_aux;

	c_aux = c;
	found_char = 0;
	while (*s != '\0')
	{
		if (*s == c_aux)
		{
			s++;
			found_char = 1;
			break ;
		}
		else
			s++;
	}
	if (!found_char && c_aux != '\0')
		return (NULL);
	//return ((char *)s);
	return (ft_strdup((char *)s));
}

static void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cont;
	unsigned char	*ptr;

	ptr = b;
	cont = 0;
	while (cont < len)
		ptr[cont++] = (unsigned char)c;
	return (b);
}

void	*ft_callocGNL(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, size);
	return (ptr);
}


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dst);
	i = 0;
	if (dstsize <= len_dest)
		return (dstsize + len_src);
	i = len_dest;
	while (i < (dstsize - 1) && *src != '\0')
	{
		*(dst + i++) = *src++;
	}
	dst[i++] = '\0';
	return (len_dest + len_src);
}