/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:19:10 by coder             #+#    #+#             */
/*   Updated: 2022/09/17 21:53:30 by coder            ###   ########.fr       */
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
	return (ft_strlen(dst));
}
