/* ************************************************************************** */
<<<<<<< HEAD
/*																			*/
/*														:::	  ::::::::   */
/*   ft_lstlast_bonus.c								 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/28 18:56:36 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/04/02 11:41:18 by mergarci		 ###   ########.fr	   */
/*																			*/
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:56:36 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/28 18:56:36 by mergarci         ###   ########.fr       */
/*                                                                            */
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
/* ************************************************************************** */

#include "libft_bonus.h"

<<<<<<< HEAD
t_list	*ft_lstlast(t_list *lst)
{
	t_list *aux;

	aux = lst;
	while (aux)
	{
		if (aux->next == NULL)
			return (aux);
		aux = aux->next;
	}
	return (aux);
=======
t_list  *ft_lstlast(t_list *lst)
{
    t_list *aux;

    aux = lst;
    while(aux)
    {  
        if (aux->next ==NULL)
            return (aux);
        aux = aux->next;
    }
    return (aux);
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}

/*int main(void)
{
<<<<<<< HEAD
	t_list *lista;
	t_list *new;
	t_list *aux;
	t_list *last;
	lista = ft_calloc(2, sizeof(t_list));
	lista = ft_lstnew("hola");
	new = ft_lstnew(("adios"));
	aux = ft_lstnew(("que tal estais?"));
	ft_lstadd_front(&lista, new);
	ft_lstadd_front(&lista, aux);
	printf("Imprimimos lista:\n");
	ft_print_lst(&lista); 
	printf("numeros de elementos en la lista: %d\n", ft_lstsize(lista));
	printf("ultimo nodo:\n");
	last = ft_lstlast(lista);
	ft_print_lst(&last);
	return (1);
=======
    t_list *lista;
    t_list *new;
    t_list *aux;
    t_list *last;
    lista = ft_calloc(2, sizeof(t_list));
    lista = ft_lstnew("hola");
    new = ft_lstnew(("adios"));
    aux = ft_lstnew(("que tal estais?"));
    ft_lstadd_front(&lista, new);
    ft_lstadd_front(&lista, aux);
    printf("Imprimimos lista:\n");
    ft_print_lst(&lista); 
    printf("numeros de elementos en la lista: %d\n", ft_lstsize(lista));
    printf("ultimo nodo:\n");
    last = ft_lstlast(lista);
    ft_print_lst(&last);
    return (1);
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
} */