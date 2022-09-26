/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 07:37:07 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/26 20:47:09 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			pos;
	size_t			len_src;	
	unsigned char	*cached_src;

	i = 0;
	pos = ft_strlen(dst);
	len_src = ft_strlen(dst);
	cached_src = (unsigned char *)src;
	if (size <= pos)
		return (size + len_src);
	while (pos < size && cached_src[i])
	{
		dst[pos] = cached_src[i];
		pos++;
		i++;
	}
	dst[pos] = '\0';
	return (ft_strlen(dst) + len_src);
}
