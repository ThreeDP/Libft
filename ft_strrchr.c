/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 07:37:42 by dapaulin          #+#    #+#             */
/*   Updated: 2022/10/02 01:15:58 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t	rev_i;
	char	*cached_str;
	char	cached_c;

	cached_c = (char)c;
	rev_i = ft_strlen(str);
	cached_str = (char *)str;
	while (rev_i != 0 && cached_str[rev_i] != cached_c)
		rev_i--;
	if (cached_str[rev_i] == cached_c)
		return (&cached_str[rev_i]);
	return (0);
}
