/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 07:37:42 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/21 07:37:44 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	rev_i;

	rev_i = ft_strlen(str) + 1;
	while (rev_i > 0)
	{
		if (str[rev_i] == c)
			return ((char *) &str[rev_i]);
		rev_i--;
	}
	return (0);
}
