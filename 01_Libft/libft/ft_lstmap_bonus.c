/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:02:20 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/30 20:02:20 by mergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

static void    *ft_strtoupper(void *s)
{
    char *str;
    int i;
    char *str_upper;

    str = s;
    str_upper = (char *)ft_calloc(ft_strlen(str), sizeof(str));
    i = 0;
    str = s;
    while (str[i] != '\0')
    {
        str_upper[i] = ft_toupper(str[i]);
        i++;
    }
    return ((void *)str_upper);
}

static void ft_del(void *content)
{
    if (content != NULL)
        free(content);
}

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *list;
    t_list *aux;

    if (lst != NULL && f != NULL && del != NULL)
    {
        list = NULL;
        aux = (t_list*)ft_calloc(1, sizeof(t_list*));
        while (lst != NULL)
        {
            aux = ft_lstnew(f(lst->content));
            if (aux == NULL)
            {
                ft_lstclear(&list, del);
                return (NULL);
            }
            ft_lstadd_back(&list, aux);
            lst = lst->next;
        }
        return (list);
    }
    return (NULL);
}

/*int main(void)
{
    t_list *lista;
    t_list *lista2;
    t_list *new;
    t_list *aux;
    t_list *aux2;
    lista = ft_calloc(2, sizeof(t_list));
    lista = ft_lstnew("hola");
    new = ft_lstnew(("adios"));
    aux = ft_lstnew(("que tal estais?"));
    aux2 = ft_lstnew(("soy MGM"));
    //ft_lstdealone(new, ft_del);
    ft_lstadd_front(&lista, new);
    ft_lstadd_back(&lista, aux);
    printf("***************Imprimimos lista:\n");
   
    //ft_lstiter(lista, ft_print_content);
    ft_lstadd_front(&lista, aux2);
    ft_print_lst(&lista); 
    printf("***************Imprimimos lista2:\n");
    lista2 = ft_lstmap(lista, ft_strtoupper, ft_del);
    ft_print_lst(&lista2); 
    return (1);
} */