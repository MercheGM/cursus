/* ************************************************************************** */
<<<<<<< HEAD
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strmapi.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/26 17:53:04 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/03/26 17:53:04 by mergarci		 ###   ########.fr	   */
/*																			*/
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:53:04 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/26 17:53:04 by mergarci         ###   ########.fr       */
/*                                                                            */
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t  len;
	size_t  i;

	i = 0;
	len = ft_strlen(s);
	str = ft_calloc(len, sizeof(char));
	if (!str || f == NULL)
		return (NULL);
	
	while (i < len)
	{
		str[i] = f(i,s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	ft_MGM(unsigned int i, char c)
{
	(void)i;
	if ((c >= 'A' && c <= 'Z') )
		return (ft_tolower(c));
	return (ft_toupper(c));
=======
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    size_t  len;
    size_t  i;

    i = 0;
    len = ft_strlen(s);
    str = ft_calloc(len, sizeof(char));
    if (!str || f == NULL)
        return (NULL);
    
    while (i < len)
    {
        str[i] = f(i,s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
/*
char    ft_MGM(unsigned int i, char c)
{
    (void)i;
    if ((c >= 'A' && c <= 'Z') )
        return (ft_tolower(c));
    return (ft_toupper(c));
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}

int main(void)
{
<<<<<<< HEAD
	char *str = "HolA aAaA tOdOOooSSSsss";
	printf("Original: \"%s\"\n Aplicando ft_MGM: \"%s\"\n", str, ft_strmapi(str, ft_MGM));
	return 1;
=======
    char *str = "HolA aAaA tOdOOooSSSsss";
    printf("Original: \"%s\"\n Aplicando ft_MGM: \"%s\"\n", str, ft_strmapi(str, ft_MGM));
    return 1;
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}*/