/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:37:41 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/25 20:33:10 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*new;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (set[i])
	{
		if(ft_strchr(s1, set[i]) == &s1[start])
			start++;
		if(ft_strrchr(s1, set[i]) == &s1[end])
			end--;
		i++;
	}
	while (i > 0)
	{
		if(ft_strchr(s1, set[i]) == &s1[start] && start == 0)
			start++;
		if(ft_strrchr(s1, set[i]) == &s1[end] && end == ft_strlen(s1))
			end--;
		i--;
	}
	new = (char *) malloc((end - start) * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, &s1[start], end);
	return(new);
}