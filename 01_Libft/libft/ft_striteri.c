/* ************************************************************************** */
<<<<<<< HEAD
/*																			*/
/*														:::	  ::::::::   */
/*   ft_striteri.c									  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/26 18:20:05 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/03/26 18:20:05 by mergarci		 ###   ########.fr	   */
/*																			*/
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:20:05 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/26 18:20:05 by mergarci         ###   ########.fr       */
/*                                                                            */
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	//size_t  len;
	unsigned int  i;
	if (s != NULL && f != NULL)
	{
		i = 0;
		//len = ft_strlen(s);
		while (s[i] != '\0')
		{
			//printf("%d: %c (%p) \n",i, s[i], &s[i]);
			f(i, &s[i]);
			//printf("%d: %c \n",i, s[i]);
		//s++;
			i++;
			//printf("i %d\n", i);
	}
		//printf("Aplicando ft_MGM: \"%s\"\n", s);
	//return (void);
	}
=======
void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    //size_t  len;
    unsigned int  i;
    if (s != NULL && f != NULL)
    {
        i = 0;
        //len = ft_strlen(s);
        while (s[i] != '\0')
        {
            //printf("%d: %c (%p) \n",i, s[i], &s[i]);
            f(i, &s[i]);
            //printf("%d: %c \n",i, s[i]);
        //s++;
            i++;
            //printf("i %d\n", i);
    }
        printf("Aplicando ft_MGM: \"%s\"\n", s);
    //return (void);
    }
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}

void ft_MGM(unsigned int i, char *c)
{
<<<<<<< HEAD
	//printf("dentr de ft_MGM: \"%d\"\n", c[i]);
	//printf("%d: %c (%p) \n",i, *c, c);
	printf("a. %c\n", *c);
	(void)i;
	printf("a1. %c\n", ft_toupper(*c));
	*c = (char)ft_toupper(*c);
	printf("b. %c\n", *c);

	
	/*if (i % 2 == 0 && (*c >= 'A' && *c <= 'Z'))
	{
		printf("a. %c\n", c[i]);
		*c = *c + 32;
		printf("b. %c\n", c[i]);
	}
	else
	{
		printf("12. %c\n", *c);
		*c = 'm';
		printf("22. %c\n", *c);
	}*/
	//return (c[i]);
=======
    //printf("dentr de ft_MGM: \"%d\"\n", c[i]);
    //printf("%d: %c (%p) \n",i, *c, c);
    printf("a. %c\n", *c);
    (void)i;
    printf("a1. %c\n", ft_toupper(*c));
    *c = (char)ft_toupper(*c);
    printf("b. %c\n", *c);

    
    /*if (i % 2 == 0 && (*c >= 'A' && *c <= 'Z'))
    {
        printf("a. %c\n", c[i]);
        *c = *c + 32;
        printf("b. %c\n", c[i]);
    }
    else
    {
        printf("12. %c\n", *c);
        *c = 'm';
        printf("22. %c\n", *c);
    }*/
    //return (c[i]);
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}

/*
int main(void)
{
<<<<<<< HEAD
	char *str = "hola a todos";
	printf("Original: \"%s\". %c\n", str, ft_toupper('c'));
	ft_striteri(str, &ft_MGM);
	printf("Aplicando ft_MGM: \"%s\"\n", str);

	return 1;
=======
    char *str = "hola a todos";
    printf("Original: \"%s\". %c\n", str, ft_toupper('c'));
    ft_striteri(str, &ft_MGM);
    printf("Aplicando ft_MGM: \"%s\"\n", str);

    return 1;
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}*/