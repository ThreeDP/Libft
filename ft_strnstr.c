/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 07:37:35 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/25 16:04:49 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_little;
	char	*cached_big;
	char	*cached_little;

	i = 0;
	cached_big = (char *)big;
	cached_little = (char *)little;
	len_little = ft_strlen(cached_little);
	while (i < len)
	{
		if (!ft_strncmp(&cached_big[i], cached_little, len_little)
			&& len - i > len_little)
			return (&cached_big[i]);
		i++;
	}
	return (0);
}
