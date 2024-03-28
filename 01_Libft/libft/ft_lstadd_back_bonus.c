/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 19:42:28 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/28 19:42:28 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *aux;

    aux = *lst;
    while(aux)
    {  
        if (aux->next ==NULL)
        {
            aux->next = new;
            break;
        }
        aux = aux->next;
    }
}

/*int main(void)
{
    t_list *lista;
    t_list *new;
    t_list *aux;

    lista = ft_calloc(2, sizeof(t_list));
    lista = ft_lstnew("hola");
    new = ft_lstnew(("adios"));
    aux = ft_lstnew(("que tal estais?"));
    ft_lstadd_front(&lista, new);
    ft_lstadd_back(&lista, aux);
    printf("Imprimimos lista:\n");
    ft_print_lst(&lista); 

    return (1);
} */