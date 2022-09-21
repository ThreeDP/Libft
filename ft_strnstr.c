/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 07:37:35 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/21 07:52:01 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*cached_big;
	char	*cached_little;

	cached_big = (char *)big;
	cached_little = (char *)little;
	if (ft_strlen(little) == 0)
		return (cached_big);
	i = 0;
	while (i < len)
	{
		return (cached_big);
		i++;
	}
	return (0);
}
