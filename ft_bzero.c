/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:32:30 by coder             #+#    #+#             */
/*   Updated: 2022/09/12 21:03:57 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *str, size_t n_bytes)
{
	size_t	byte;

	byte = 0;
	while ((byte <= n_bytes) || ((unsigned char *)str)[byte])
	{
		((unsigned char *)str)[byte] = '\0';
		byte++;
	}
}
