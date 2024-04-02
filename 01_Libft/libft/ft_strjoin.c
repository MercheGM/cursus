/* ************************************************************************** */
<<<<<<< HEAD
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strjoin.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/24 20:58:26 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/03/24 20:58:26 by mergarci		 ###   ########.fr	   */
/*																			*/
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 20:58:26 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/24 20:58:26 by mergarci         ###   ########.fr       */
/*                                                                            */
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = (char *)malloc ((len_s1 + len_s2 + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, len_s1 + 1);
	ft_strlcat(ptr, s2, len_s1 + len_s2 + 1);
	return (ptr);
=======
char    *ft_strjoin(char const *s1, char const *s2)
{
    char *ptr;
    size_t  len_s1;
    size_t  len_s2;

    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    ptr = (char *)malloc ((len_s1 + len_s2 + 1) * sizeof(char));
    if (!ptr)
        return (NULL);
    ft_strlcpy(ptr, s1, len_s1 + 1);
    ft_strlcat(ptr, s2, len_s1 + len_s2 + 1);
    return (ptr);
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}

/*int main()
{
<<<<<<< HEAD
	char *str = "a todos";
	char * dst = "12345";
	dst = ft_strjoin(str, dst);
	printf("%s_%d", dst, ft_strlen(dst));

	return 0;
=======
    char *str = "a todos";
    char * dst = "12345";
    dst = ft_strjoin(str, dst);
    printf("%s_%d", dst, ft_strlen(dst));

    return 0;
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}*/