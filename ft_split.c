/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:50:43 by dapaulin          #+#    #+#             */
/*   Updated: 2022/10/03 23:41:48 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**find_words(char const *s, char c)
{
	size_t		amount;
	char	*ptr;
	char	*ptr_n;
	char	*start_w;
	
	amount = 0;
	ptr = (char *) s;
	ptr_n = (char *) s;
	start_w = (char *) s;
	while (1)
	{
		
		ptr = ft_strchr(ptr, c);
		if (ptr && c != 0)
		{
			if (ptr - start_w > 1)
				amount++;
			if (ptr == 0)
				break ;
			ptr++;
		}
		else
		{
			ptr_n = ft_strchr(ptr_n, '\0');
			if (ptr_n - start_w > 1)
				amount++;
		}
		if (!*ptr_n)
			break ;
		start_w = ptr;
	}
	return ((char **) ft_calloc(amount + 1, sizeof(char *)));
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
	end_n = (char *) text;
	while (1)
	{
		end_w = ft_strchr(end_w, c);
		if (end_w && c != 0)
		{
			size = (end_w - start_w);
			if (size > 1)
			{
				rows[i] = ft_substr(text, start_w - text, size);
				i++;
			}
			if (end_w == 0)
				break ;
			end_w++;
		}
		else
		{
			end_n = ft_strchr(end_n, '\0');
			size = (end_n - start_w);
			if (size > 1)
				rows[i] = ft_substr(text, start_w - text, size);
		}
		if (!*end_n)
			break ;
		start_w = end_w;
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