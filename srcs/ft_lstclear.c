/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:23:34 by dapaulin          #+#    #+#             */
/*   Updated: 2022/10/04 00:41:00 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *head;
    t_list  *next;
    
    head = *lst;
    next = *lst;
    while (next)
    {
		head = head -> next;
        ft_lstdelone(next, del);
        next = head;
    }
	*lst = NULL;
}