/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:17:09 by lbrum-go          #+#    #+#             */
/*   Updated: 2023/04/25 14:19:35 by lbrum-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*funcao)(unsigned int, char*))
{
	int	i;

	if (!str || !funcao)
		return ;
	i = 0;
	while (str[i])
	{
		funcao(i, &str[i]);
		i++;
	}
	return ;
}
