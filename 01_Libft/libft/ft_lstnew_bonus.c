/* ************************************************************************** */
<<<<<<< HEAD
/*																			*/
/*														:::	  ::::::::   */
/*   ft_lstnew_bonus.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/27 11:42:34 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/03/27 11:42:34 by mergarci		 ###   ########.fr	   */
/*																			*/
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:42:34 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/27 11:42:34 by mergarci         ###   ########.fr       */
/*                                                                            */
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
/* ************************************************************************** */

#include "libft_bonus.h"

t_list  *ft_lstnew(void *content)
{
<<<<<<< HEAD
	t_list  *list;
	list = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!list)
		return (NULL);
	//list->content = ft_calloc(1, sizeof(content));
	list->content = content;
	list->next = NULL;
	return (list);
=======
    t_list  *list;
    list = (t_list *)ft_calloc(1, sizeof(t_list));
    if (!list)
        return (NULL);
    //list->content = ft_calloc(1, sizeof(content));
    list->content = content;
    list->next = NULL;
    return (list);
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}

/*int main(void)
{
<<<<<<< HEAD
	t_list *lista;
	lista = ft_lstnew((void *)"hola");

	printf("%s", (char *)lista->content);
		
	return (1);
=======
    t_list *lista;
    lista = ft_lstnew((void *)"hola");

    printf("%s", (char *)lista->content);
        
    return (1);
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}*/