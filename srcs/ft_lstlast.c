/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:24:38 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/26 19:57:58 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list  *tail;
    if (!lst)
        return (NULL);
    while (lst)
    {
        tail = lst;   
        lst = lst -> next;
    }
    return (tail);
}