/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdealone_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:05:46 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/29 11:05:46 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void ft_del(void *content)
{
    //printf("entramos en ft_del %s\n", (char *)content);
    if (content != NULL){
        //printf("bu!!\n");
        free(content);
    }
    //printf("salimos de ft_del %s\n", (char *)content);
}


void    ft_lstdealone(t_list *lst, void (*del)(void *))
{
    if (lst == NULL || del == NULL)
        return ;
    (del)(lst->content);
    lst->content = NULL;
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
    ft_lstdealone(new, ft_del);
    ft_lstadd_front(&lista, new);
    ft_lstadd_back(&lista, aux);
    printf("Imprimimos lista:\n");
    ft_print_lst(&lista); 
    
    //printf("Imprimimos lista:\n");
    //ft_print_lst(&lista); 

    return (1);
} */