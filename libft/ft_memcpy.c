/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:42:45 by lbrum-go          #+#    #+#             */
/*   Updated: 2023/04/20 08:48:57 by lbrum-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*fonte;
	unsigned char	*destino;
	unsigned int	counter;

	if (src == NULL && dst == NULL)
	{
		return (dst);
	}
	fonte = (unsigned char *)src;
	destino = (unsigned char *)dst;
	counter = 0;
	while (len > counter)
	{
		destino[counter] = fonte[counter];
		counter++;
	}
	return (destino);
}
