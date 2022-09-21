/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 07:37:07 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/21 07:37:08 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	pos;

	i = 0;
	pos = ft_strlen(dst);
	while ((pos + i) < size || src[i])
	{
		dst[pos + i] = src[i];
		i++;
	}
	dst[pos + i] = '\0';
	return (pos);
}
