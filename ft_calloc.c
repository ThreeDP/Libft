/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:00:12 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/25 15:59:20 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	if (nmemb * size > ~(1 << 31))
		return (NULL);
	if (!nmemb || !size)
		return (NULL);
	ptr = (unsigned char *) malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', nmemb * size);
	return (ptr);
}
