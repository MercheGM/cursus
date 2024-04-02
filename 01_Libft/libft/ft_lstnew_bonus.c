/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_lstnew_bonus.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/27 11:42:34 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/03/27 11:42:34 by mergarci		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft_bonus.h"

t_list  *ft_lstnew(void *content)
{
	t_list  *list;
	list = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!list)
		return (NULL);
	//list->content = ft_calloc(1, sizeof(content));
	list->content = content;
	list->next = NULL;
	return (list);
}

/*int main(void)
{
	t_list *lista;
	lista = ft_lstnew((void *)"hola");

	printf("%s", (char *)lista->content);
		
	return (1);
}*/