/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 08:53:42 by lbrum-go          #+#    #+#             */
/*   Updated: 2023/04/20 09:19:50 by lbrum-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destino;
	const unsigned char	*fonte;

	destino = dest;
	fonte = src;
	if (destino == fonte)
	{
		return (dest);
	}
	if (dest > src)
	{
		while (n > 0)
		{
			(destino[n - 1] = fonte[n - 1]);
			n--;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
