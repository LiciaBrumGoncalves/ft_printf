/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:22:58 by lbrum-go          #+#    #+#             */
/*   Updated: 2023/04/22 16:26:52 by lbrum-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	inicio;
	size_t	fim;

	inicio = 0;
	while (s1[inicio] && ft_char_in_set(s1[inicio], set))
		inicio++;
	fim = ft_strlen(s1);
	while (fim > inicio && ft_char_in_set(s1[fim - 1], set))
		fim--;
	str = (char *)malloc(sizeof(*s1) * (fim - inicio + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (inicio < fim)
		str[i++] = s1[inicio++];
	str[i] = 0;
	return (str);
}
