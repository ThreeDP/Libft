/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 07:37:28 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/25 03:50:47 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			pos;
	unsigned char	*cached_s1;
	unsigned char	*cached_s2;

	pos = 0;
	cached_s1 = (unsigned char *)s1;
	cached_s2 = (unsigned char *)s2;
	while (pos < n && (cached_s1[pos] || cached_s2[pos]))
	{
		if (cached_s1[pos] != cached_s2[pos])
			return (cached_s1[pos] - cached_s2[pos]);
		pos++;
	}
	return (0);
}
