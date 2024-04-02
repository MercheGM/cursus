/* ************************************************************************** */
<<<<<<< HEAD
/*																			*/
/*														:::	  ::::::::   */
/*   libft_bonus.h									  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mergarci <mergarci@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/27 12:18:48 by mergarci		  #+#	#+#			 */
/*   Updated: 2024/04/02 11:41:34 by mergarci		 ###   ########.fr	   */
/*																			*/
=======
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mergarci <mergarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:18:48 by mergarci          #+#    #+#             */
/*   Updated: 2024/03/27 12:18:48 by mergarci         ###   ########.fr       */
/*                                                                            */
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

<<<<<<< HEAD
# include "libft.h"

// Bonus
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdealone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
//funciones aux (MGM)
void	ft_print_lst(t_list **lst);
void	ft_del(void *content);
void	ft_print_content(void *s);
void	*ft_strtoupper(void *s);
=======
# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft.h"

// Bonus
typedef struct      s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

t_list  *ft_lstnew(void *content);
void   ft_lstadd_front(t_list **lst, t_list *new);
int    ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstdealone(t_list *lst, void (*del)(void *));
void    ft_lstclear(t_list **lst, void (*del)(void *));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
//funciones aux (MGM)
void    ft_print_lst(t_list **lst);
void    ft_del(void *content);
void    ft_print_content(void *s);
>>>>>>> a0fc28e39819969a5b6726d3d0adaab1e428dac2
#endif