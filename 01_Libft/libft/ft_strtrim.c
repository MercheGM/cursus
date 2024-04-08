/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strtrim.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/25 11:44:20 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/03/25 11:44:20 by mergarci		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"
/*
static size_t ft_count_nbrchr(char const *s1, char const *set)
{
	size_t cont;
	size_t i;
	size_t j;

	cont = 0;
	i = 0;
	j = 0;
	while (j < ft_strlen(set))
	{
		while (i < ft_strlen(s1))
		{
			if (s1[i] == set[j])
				cont++;
			i++;
		}
		i = 0;
		j++;
	}
	return (cont);
}

static int ft_check_char(const char c, char const *set)
{
	int found;

	found = 0;
	while (*set)
	{
		if (c == *set)
			found = 1;
		set++;
	}
	return (found);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	len_ptr;
	size_t	i;
	size_t	cont;
	size_t	j;

	j = 0;
	i = 0;
	cont = 0;
	len_ptr = ft_strlen(s1) - ft_count_nbrchr(s1, set);
	ptr = (char *)ft_calloc(len_ptr + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < len_ptr)
	{
		while (j < ft_strlen(s1))
		{
			//printf("i: %zu, j: %zu, s1: %c (%d)\n", i, j, s1[j], s1[j]);
			
			if (!ft_check_char(s1[j], set))
			{
				ptr[i] = s1[j];
				//printf("copiado: ptr[%zu]: %c\n", i, ptr[i]);
				i++;
			}
			j++;
		}
	}
	
	return (ptr);
}*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_set;
	size_t	i;
	size_t	j;
	int found_begin;
	char *aux = NULL;

	found_begin = 0;
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	i = 0;
	j = len_s1;
	aux = ft_strrchr(set, s1[i]);
	while(i < len_s1 && aux != NULL)
		aux = ft_strrchr(set, s1[i++]);
	i--;
	//printf("i: %zu, %c\n", i, s1[i]);
	//printf("j antes de nada: %zu\n", j);
	aux = ft_strrchr(set, s1[j--]);
	while(j >= 0 && aux != NULL)
	{
		printf("j: %zu, aux: |%s|, |%c|\n", j, aux, s1[j]);
		aux = ft_strrchr(set, s1[j--]);
		//printf("j: %zu, %c\n", j, s1[j]);
	}
	j++;
	printf("j: %zu, %c\n", j, s1[j]);
	//j--;
	ptr = (char *)ft_calloc(j - i - 1, sizeof(char));
	if (!ptr)
		return (NULL);
	while (i--)
		s1++;
	ft_strlcpy(ptr, s1, (j - i - 1));
	return (ptr); 
}

int main()
{
	char *str = "a  todosa6 ";
	char *set = "a ";
	char *new = ft_strtrim(str, set);
	//dst = ft_strjoin(str, dst);
	printf("%s", new);

	return 0;
}