/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:10:07 by dapaulin          #+#    #+#             */
/*   Updated: 2022/09/21 21:53:46 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int		pos;
	int		nbr;
	int		sign;

	pos = 0;
	while (ft_isspace(nptr[pos]))
		pos++;
	sign = ft_signdetect(nptr[pos], &pos);
	nbr = 0;
	while (ft_isdigit(nptr[pos]))
	{
		nbr *= 10;
		nbr += (nptr[pos] - '0');
		pos++;
	}
	return (nbr * sign);
}
