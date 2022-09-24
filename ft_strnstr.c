/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 07:37:35 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/24 20:59:07 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*cached_big;
	char	*cached_little;

	i = 0;
	cached_big = (char *)big;
	cached_little = (char *)little;
	while (i < len)
	{
		j = 0;
		while ((cached_big[i + j] == cached_little[j]) && (i + j < len))
		{
			if (!cached_big[i + j])
				break ;
			j++;
		}
		if (cached_little[j] == '\0')
			return (&cached_big[i]);
		i++;
		i += 1 + j;
	}
	return (0);
}
