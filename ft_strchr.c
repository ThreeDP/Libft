/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 07:37:00 by dapaulin          #+#    #+#             */
/*   Updated: 2022/10/02 01:11:45 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	size_t	size;
	char	*cached_str;

	i = 0;
	size = ft_strlen(str);
	cached_str = (char *)str;
	while (i <= size + 1)
	{
		if (cached_str[i] == (char)c)
			return (&cached_str[i]);
		i++;
	}
	return (0);
}
