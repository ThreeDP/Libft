/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:50:43 by dapaulin          #+#    #+#             */
/*   Updated: 2022/10/04 22:28:55 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**find_words(char const *s, char c)
{
    size_t    amount;
    char    *start;
    char    *next_point;
    
    amount = 0;
    start = (char *) s;
    next_point = NULL;
    while (1)
    {
        next_point = ft_strchr(start, c);
        if (next_point - start > 1 && c != '\0')
            amount++;
        else if (ft_strchr(start, '\0') - start > 1 && (next_point == 0 || c == 0))
        {
            amount++;
            break;
        }
        else if (next_point == 0)
          break;
        start = next_point + 1;
    }
    return ((char **) ft_calloc(amount + 1, sizeof(char *)));
}

static void	split_words(char **rows, char const *text, char c)
{
	int		i;
	int		size;
	char	*start_w;

	i = 0;
	start_w = (char *) text;
	while (1)
	{
		if (ft_strchr(start_w, c) && c != 0)
		{
			size = (ft_strchr(start_w, c) - start_w);
			if (size > 1)
			{
				rows[i] = ft_substr(text, start_w - text, size);
				i++;
			}
		}
		else if (ft_strchr(start_w, '\0'))
		{
			size = (ft_strchr(start_w, '\0') - start_w);
			if (size > 1)
				rows[i] = ft_substr(text, start_w - text, size);
			break;
		}
		start_w = ft_strchr(start_w, c) + 1;
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