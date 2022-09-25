/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 07:37:07 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/25 13:10:51 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			pos;
	unsigned char	*cached_src;

	i = 0;
	pos = ft_strlen(dst);
	cached_src = (unsigned char *)src;
	while (pos + 1 < size && cached_src[i])
	{
		dst[pos] = cached_src[i];
		pos++;
		i++;
	}
	dst[pos] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
