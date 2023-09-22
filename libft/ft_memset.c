/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:37:50 by lbrum-go          #+#    #+#             */
/*   Updated: 2023/04/20 08:39:06 by lbrum-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned int	counter;
	unsigned char	*memoria;

	counter = 0;
	memoria = dest;
	while (len > counter)
	{
		memoria[counter] = c;
		counter++;
	}
	return (memoria);
}
