/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 15:06:35 by lbrum-go          #+#    #+#             */
/*   Updated: 2023/04/22 15:08:20 by lbrum-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int inicio, size_t len)
{
	char	*resultado;

	if (!str)
		return (NULL);
	if (len > ft_strlen(str) - inicio)
		len = ft_strlen(str) - inicio;
	if (inicio > ft_strlen(str))
		return (ft_strdup(""));
	resultado = malloc(sizeof(char) * (len + 1));
	if (!resultado)
		return (NULL);
	ft_memcpy(resultado, &str[inicio], len);
	resultado[len] = '\0';
	return (resultado);
}
