/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:43:11 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/24 19:43:11 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int star, size_t len)
{
    char *ptr;

    //if (star < len)
    //{
        ptr = (char *)ft_calloc(len + 1, sizeof(char));
        //ptr = (char*)malloc ((len + 1) * sizeof(char));
        if (!ptr)
            return (NULL);
        while (star--)
            s++;
        ft_strlcpy(ptr, s, len + 1);
    //}
    return (ptr);

}

/*int main()
{
    char *str = "hola a todos";
    char * dst;
    dst = ft_substr(str, 2 ,8);
    printf("%s %d", dst, ft_strlen(dst));

    return 0;
}*/