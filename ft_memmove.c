/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 07:36:47 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/21 07:44:58 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n_bytes)
{
	unsigned char	*cached_dest;
	unsigned char	*cached_src;

	cached_dest = (unsigned char *)dest;
	cached_src = (unsigned char *)src;
	while (n_bytes > 0)
	{
		cached_dest[n_bytes] = cached_src[n_bytes];
		n_bytes--;
	}
	return (cached_dest);
}
