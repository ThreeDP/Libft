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
	size_t	i;
	char	*start;
	char	*end;
	char	*new;

	i = 0;
	start = (char *)s1;
	end = (char *) s1 + ft_strlen(s1);
	while (set[i++])
	{
		if (!ft_strrchr(start, s1[i]) && str)
			break ;
		else if (set[i])
		{
			
			end--;
		}
	}
	new = (char *) ft_calloc((end - start) + 1, sizeof(char));
	if (new)
		ft_strlcpy(new, start, end - start);
	return(new);
}