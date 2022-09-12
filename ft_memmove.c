/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 21:02:06 by coder             #+#    #+#             */
/*   Updated: 2022/09/09 23:13:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n_bytes)
{
	while (n_bytes >= 0)
	{
		dest[n_bytes] == (void *) src[n_bytes];
		n_bytes--;
	}
	return (dest);
}
