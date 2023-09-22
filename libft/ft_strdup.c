/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:30:12 by lbrum-go          #+#    #+#             */
/*   Updated: 2023/04/22 14:32:06 by lbrum-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*destino;
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	destino = (char *)malloc(sizeof(char) * i + 1);
	if (!destino)
		return (NULL);
	i = 0;
	while (*src)
		destino[i++] = *src++;
	destino[i] = '\0';
	return (destino);
}
