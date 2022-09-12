/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:36:03 by coder             #+#    #+#             */
/*   Updated: 2022/09/12 21:15:14 by coder            ###   ########.fr       */
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
