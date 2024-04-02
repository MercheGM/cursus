/* ************************************************************************** */
<<<<<<< HEAD
/*																			*/
/*														:::	  ::::::::   */
/*   ft_lstadd_front_bonus.c							:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/27 13:05:33 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/04/02 11:36:23 by mergarci		 ###   ########.fr	   */
/*																			*/
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:05:33 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/27 13:05:33 by mergarci         ###   ########.fr       */
/*                                                                            */
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
/* ************************************************************************** */

#include "libft_bonus.h"

<<<<<<< HEAD
void	ft_print_lst(t_list **lst)
{
	t_list	*aux = *lst;

	while (aux != NULL)
	{
		printf("****%p*****\n", aux);
		printf("lista->content: %s\n", (char *)aux->content);
		printf("lista->next: %p\n", aux->next);
		aux = aux->next;
	}
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst != NULL)
		new->next = *lst;
	*lst = new;
=======
static void ft_print_lst(t_list **lst)
{
    t_list *aux = *lst;

    while (aux !=NULL)
    {
        printf("****%p*****\n", aux);
        printf("lista->content: %s\n", (char *)aux->content);
        printf("lista->next: %p\n", aux->next);
        aux = aux->next;
    }
}

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (*lst != NULL)
        new->next = *lst;
    *lst = new;
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}

/*int main(void)
{
<<<<<<< HEAD
	t_list *lista;
	t_list *new;
	lista = ft_calloc(2, sizeof(t_list));
	lista = ft_lstnew("hola");
	new = ft_lstnew(("adios"));
	printf("Imprimimos lista:\n");
	ft_print_lst(&lista);
	printf("Imprimimos new:\n");
	ft_print_lst(&new);  
	ft_lstadd_front(&lista, new);
	printf("Imprimimos lista:\n");
	ft_print_lst(&lista); 

	return (1);
=======
    t_list *lista;
    t_list *new;
    lista = ft_calloc(2, sizeof(t_list));
    lista = ft_lstnew("hola");
    new = ft_lstnew(("adios"));
    printf("Imprimimos lista:\n");
    ft_print_lst(&lista);
    printf("Imprimimos new:\n");
    ft_print_lst(&new);  
    ft_lstadd_front(&lista, new);
    printf("Imprimimos lista:\n");
    ft_print_lst(&lista); 

    return (1);
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}*/