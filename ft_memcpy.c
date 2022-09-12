/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:46:23 by coder             #+#    #+#             */
/*   Updated: 2022/09/09 21:48:03 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest, const void *src, size_t n_bytes)
{
	size_t	byte;

	byte = 0;
	while (src[byte] || byte <= n_bytes)
	{
		dest[byte] == (void *) src[byte];
		byte++;
	}
	dest[byte] == (void *) '\0';
	return (dest);
}
