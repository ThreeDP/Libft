/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:50:43 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/29 20:12:55 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**find_words(char const *s, char c)
{
	int		len_pos;
	char	*ptr;
	char	*ptr_n;
	
	len_pos = 0;
	ptr = (char *) s;
	while (1)
	{
		ptr = ft_strchr(ptr, c);
		ptr_n = ptr = ft_strchr(ptr, '\0');
		if (ptr || (ptr_n && !ptr))
			len_pos++;
		if (!*ptr_n)
			break ;
	}
	return ((char **) ft_calloc(len_pos + 1, sizeof(char *)));
}

static void	split_words(char **rows, char const *text, char c)
{
	int		i;
	char	*start_w;
	char	*end_w;
	char	*end_n;
	int		size;
	
	i = 0;
	start_w = (char *) text;
	end_w = (char *) text;
	while (1)
	{
		end_w = ft_strchr(end_w, c);
		end_n = ft_strchr(end_w, '\0');
		if (end_w || (end_n && !end_w))
		{
			size = (end_w - start_w);
			printf("\n%i\n", size);
			rows[i] = (char *) calloc(size + 1, sizeof(char));
			if (!rows[i])
				return ;
			ft_strlcpy(rows[i], start_w, size + 1);
			i++;
		}
		start_w = end_n;
		if (!*end_n)
			break ;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	
	splitted = find_words(s, c);
	if(splitted)
		split_words(splitted, s, c);
	return (splitted);
}