/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_split.c										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/25 16:27:38 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/03/25 16:27:38 by mergarci		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	cont;
	int i;

	i = 0;
	if (ft_strlen(s) == 0)
		return (0);
	cont = 1;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i - 1] != c))
		//if ((s[i] == c && s[i-1] != c) || (s[i] == c && s[i+1] != c))
			cont++;
		i++;
	}
	if (s[i] == '\0' && s[i - 1] == c)
		cont--;
	return (cont);
}

char	**ft_split_words(char const *s, char c, int num_words, char **dst)
{
	int		i;
	int		ini;
	int		cont;
	char	*s_aux;

	s_aux = NULL;

	cont = 0;
	i = 0;
	while (s[i] == c)
		i++;
	ini = i;
	while (cont < num_words)
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (s[i - 1] == c)
				ini = i + 1;
			else
			{
				s_aux = ft_substr(s, ini, i - ini);
				if (!s_aux)
					return (NULL);
				dst[cont] = s_aux; //ft_substr(s, ini, i - ini);
				cont++;
				ini = i + 1;
			}
		}
		i++;
	}
	dst[cont] = NULL;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		num_words;

	num_words = ft_count_words(s, c);
	//printf("num words: %d\n", num_words);
	ptr = (char **)ft_calloc(num_words + 1, sizeof(char *));
	if (!ptr)
		return (NULL);
	ptr = ft_split_words(s, c, num_words, ptr);
	return (ptr);
}

/*int main()
{
	char *str = "split  ||this|for|me|||||!|";
	char **array;
	int cont = 0;
	array = ft_split(str, '|');
	while (array[cont] != NULL)
	{
		printf(".%s.\n", array[cont]);
		cont++;
	} 
	return 0;
}*/