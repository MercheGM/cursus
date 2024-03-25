/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:44:20 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/25 11:44:20 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char *ptr;
    size_t  len_s1;
    size_t  len_set;
    size_t i;
    size_t j;
    
    len_s1 = ft_strlen(s1);
    len_set = ft_strlen(set);
    i = 0;
    j = len_s1;
    while (s1[i] == set[i])
        i++;
    while (s1[len_s1--] == set[len_set--])
        j--;
    ptr = (char *)ft_calloc(j - i - 1, sizeof(char));
    if (!ptr)
        return (NULL);
    while (i--)
        s1++;
    ft_strlcpy(ptr, s1, (j - i -1));
    return (ptr);
}

int main()
{
    char *str = "atodosa6 ";
    char *set = "a ";
    char *new = ft_strtrim(str, set);
    //dst = ft_strjoin(str, dst);
    printf("%s", new);

    return 0;
}