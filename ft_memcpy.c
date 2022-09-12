/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:46:23 by coder             #+#    #+#             */
/*   Updated: 2022/09/12 21:09:32 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*memcpy(void *dest, const void *src, size_t n_bytes)
{
	size_t	byte;

	byte = 0;
	while (((unsigned char *)src)[byte] || byte <= n_bytes)
	{
		((unsigned char *)dest)[byte] = ((unsigned char *)src)[byte];
		byte++;
	}
	((unsigned char *)dest)[byte] = '\0';
	return (dest);
}
