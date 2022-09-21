/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 07:36:25 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/21 07:48:59 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*cached_str;

	i = 0;
	cached_str = (unsigned char *)str;
	while (i < n)
	{
		if (cached_str[i] == c)
			return (&cached_str[i]);
		i++;
	}
	return (0);
}
