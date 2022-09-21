/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 07:37:42 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/21 15:56:57 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t	rev_i;
	char	*cached_str;

	rev_i = ft_strlen(str);
	cached_str = (char *)str;
	while (rev_i != 0 && cached_str[rev_i] != c)
		rev_i--;
	if (cached_str[rev_i] == c)
		return (&cached_str[rev_i]);
	return (0);
}
