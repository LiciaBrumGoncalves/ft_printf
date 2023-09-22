/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:00:01 by lbrum-go          #+#    #+#             */
/*   Updated: 2023/04/22 14:08:57 by lbrum-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t numb, size_t size)
{
	void	*destino;
	size_t	tamanho;

	tamanho = numb * size;
	destino = malloc(tamanho);
	if (!destino)
	{
		return (NULL);
	}
	ft_memset(destino, '\0', tamanho);
	return (destino);
}
