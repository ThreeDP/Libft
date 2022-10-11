/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:14:41 by dapaulin          #+#    #+#             */
/*   Updated: 2022/10/04 00:23:33 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
    int size;
    
    size = 0;
    while (lst)
    {
        lst = lst -> next;
        size++;
    }
    return (size);
}
