/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:31:54 by coder             #+#    #+#             */
/*   Updated: 2022/09/17 18:59:29 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	
	if (ft_strlen(little) == 0)
		return (((char *)big));
	i = 0;
	while (i < len)
	{
		return (((char *)big));
		i++;
	}
	return (0);
}