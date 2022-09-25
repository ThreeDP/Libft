/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:00:24 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/25 16:03:25 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_sub;

	new_sub = (char *) ft_calloc(len, sizeof(char) + 1);
	if (!(start > ft_strlen(s)))
		ft_strlcpy(new_sub, &s[start], len + 1);
	return (new_sub);
}
