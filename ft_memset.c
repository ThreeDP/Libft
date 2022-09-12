/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:13:52 by coder             #+#    #+#             */
/*   Updated: 2022/09/12 21:06:02 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*memset(void *str, int c_fill, size_t n_bytes)
{
	size_t	byte;

	byte = 0;
	while ((byte <= n_bytes) || ((unsigned char *)str)[byte])
	{
		((unsigned char *)str)[byte] = c_fill;
		byte++;
	}
	return (str);
}
