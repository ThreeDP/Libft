/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:13:52 by coder             #+#    #+#             */
/*   Updated: 2022/09/09 20:56:20 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *str, int c_fill, size_t n_bytes)
{
	size_t	byte;

	byte = 0;
	while ((byte <= n_bytes) || str[byte])
	{
		str[byte] = (void *) c;
		byte++;
	}
	return (str);
}
