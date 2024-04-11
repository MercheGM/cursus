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
	size_t	len_s1;
	size_t	ini;
	size_t	end;
	char	*aux;

	len_s1 = ft_strlen(s1);
	if (len_s1 == 0)
		return (ft_strdup(""));
	ini = 0;
	end = len_s1 - 1;
	aux = ft_strrchr(set, s1[ini]);
	while (ini < len_s1 && aux != NULL)
		aux = ft_strrchr(set, s1[ini++]);
	if (ini != 0)
		ini--;
	aux = ft_strrchr(set, s1[end--]);
	while (end > 0 && aux != NULL)
		aux = ft_strrchr(set, s1[end--]);
	if (end == 0)
		end = ini;
	else
		end++;
	if (len_s1 == 0 || (ini == len_s1 - 1 && end == len_s1 - 1))
		return (ft_strdup(""));
	return (ft_substr(s1, (unsigned int)ini, end - ini + 1));
}
/*
int main()
{
	char *str = "";
	char *set = "";
	char *new = ft_strtrim(str, set);
	//dst = ft_strjoin(str, dst);
	printf("|%s|", new);

	return 0;
}*/