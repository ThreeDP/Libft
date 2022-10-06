/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:37:41 by dapaulin          #+#    #+#             */
/*   Updated: 2022/10/05 01:59:29 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char 	*new_s
	size_t	s;
	size_t	e;
	
	s = 0;
	while (s1[s] && ft_strchr(set, s1[s]))
		s++;
	e = ft_strlen(s1);
	while (e > 0 && ft_strchr(set, s1[e]))
		e--;
	new_s = (char *) ft_calloc((e - s) + 1, sizeof(char));
	if (new_s)
		ft_strlcpy(new_s, s, e - s);
	return(new_s);
}