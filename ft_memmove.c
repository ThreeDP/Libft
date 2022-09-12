/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 21:02:06 by coder             #+#    #+#             */
/*   Updated: 2022/09/12 21:10:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n_bytes)
{
	while (n_bytes >= 0)
	{
		((unsigned char *)dest)[n_bytes] = ((unsigned char *)src)[n_bytes];
		n_bytes--;
	}
	return (dest);
}
