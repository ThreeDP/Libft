/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:23:34 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/29 11:18:04 by dapaulin         ###   ########.fr       */
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
        ft_lstdelone(next, del);
        next = next -> next;
    }
    head = NULL;
}