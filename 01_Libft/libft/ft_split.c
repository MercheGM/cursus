/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:27:38 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/25 16:27:38 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count_words(char const *s, char c)
{
    int cont;

    cont = 1;
    while(*s++ != '\0')
    {
        if (*s == c)
            cont++;
    }
    return (cont);
}

char **ft_split_words(char const *s, char c, int num_words, char **dst)
{
    int i;
    int ini;
    int cont;

    cont = 0;
    i = 0;
    ini = 0;
    while(cont < num_words)
    {
        if (s[i] == c || s[i] == '\0')
        {   
            dst[cont] = ft_substr(s, ini, i - ini);
            cont++;
            ini = i + 1;
        }
        i++;
    }
    dst[cont] = NULL;
    return (dst);
}

char    **ft_split(char const *s, char c)
{
    char **ptr;
    int num_words;

    num_words = ft_count_words(s, c);  
    ptr = ft_calloc(num_words + 1, sizeof(int *));
    if (!ptr)
        return (NULL);
    ptr = ft_split_words(s, c, num_words, ptr);
    return (ptr);
}

/*int main()
{
    char *str = "hola a todos";
    char **array;
    int cont = 0;
    array = ft_split(str, ' ');
    while (array[cont] != NULL)
    {
        printf("%s\n", array[cont]);
        cont++;
    } 
    return 0;
}*/