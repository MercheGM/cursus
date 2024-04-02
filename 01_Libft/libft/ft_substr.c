/* ************************************************************************** */
<<<<<<< HEAD
/*																			*/
/*														:::	  ::::::::   */
/*   ft_substr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/24 19:43:11 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/03/24 19:43:11 by mergarci		 ###   ########.fr	   */
/*																			*/
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 19:43:11 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/24 19:43:11 by mergarci         ###   ########.fr       */
/*                                                                            */
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
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
	ptr = (char *)ft_calloc(len + 1, sizeof(char));
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
=======
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

>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}

/*int main()
{
<<<<<<< HEAD
	char *str = "hola";
	char * dst;
	dst = ft_substr(str, 3 , 2);
	printf("str: %p, %s %lu\n", str, str, ft_strlen(str));
	printf("dst: %p, %s %lu\n", dst, dst, ft_strlen(dst));

	return 0;
=======
    char *str = "hola a todos";
    char * dst;
    dst = ft_substr(str, 2 ,8);
    printf("%s %d", dst, ft_strlen(dst));

    return 0;
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}*/