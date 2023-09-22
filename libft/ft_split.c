/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:01:17 by lbrum-go          #+#    #+#             */
/*   Updated: 2023/04/22 18:09:51 by lbrum-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	palavras;
	int	separador;

	palavras = 0;
	separador = 0;
	while (*str)
	{
		if (*str != c && separador == 0)
		{
			palavras++;
			separador = 1;
		}
		else if (*str == c)
			separador = 0;
		str++;
	}
	return (palavras);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			split[j++] = ft_substr(s, start, i - start);
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}
