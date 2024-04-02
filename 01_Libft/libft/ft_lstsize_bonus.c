/* ************************************************************************** */
<<<<<<< HEAD
/*																			*/
/*														:::	  ::::::::   */
/*   ft_lstsize_bonus.c								 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/27 13:56:31 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/03/27 13:56:31 by mergarci		 ###   ########.fr	   */
/*																			*/
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:56:31 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/27 13:56:31 by mergarci         ###   ########.fr       */
/*                                                                            */
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
/* ************************************************************************** */

#include "libft_bonus.h"

<<<<<<< HEAD
int	ft_lstsize(t_list *lst)
{
	int cont;
	t_list *aux;

	aux = lst;
	cont = 0;
	while(aux)
	{
		aux = aux->next;
		cont++;
	}
	return (cont);
=======
int    ft_lstsize(t_list *lst)
{
    int cont;
    t_list *aux;

    aux = lst;
    cont = 0;
    while(aux)
    {
        aux = aux->next;
        cont++;
    }
    return (cont);
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
	//printf("Imprimimos lista:\n");
	//ft_print_lst(&lista);
	//printf("Imprimimos new:\n");
	//ft_print_lst(&new);  
	ft_lstadd_front(&lista, new);
	printf("Imprimimos lista:\n");
	ft_print_lst(&lista); 
	printf("numeros de elementos en la lista: %d\n", ft_lstsize(lista));
	return (1);
=======
    t_list *lista;
    t_list *new;
    lista = ft_calloc(2, sizeof(t_list));
    lista = ft_lstnew("hola");
    new = ft_lstnew(("adios"));
    //printf("Imprimimos lista:\n");
    //ft_print_lst(&lista);
    //printf("Imprimimos new:\n");
    //ft_print_lst(&new);  
    ft_lstadd_front(&lista, new);
    printf("Imprimimos lista:\n");
    ft_print_lst(&lista); 
    printf("numeros de elementos en la lista: %d\n", ft_lstsize(lista));
    return (1);
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
}*/