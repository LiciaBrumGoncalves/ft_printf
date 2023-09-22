/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:06:13 by lbrum-go          #+#    #+#             */
/*   Updated: 2023/04/22 13:42:08 by lbrum-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (to_find[b] == 0)
		return ((char *)str);
	while (str[a])
	{
		while (str[a + b] && str[a + b] == to_find[b] && len > (a + b))
			b++;
		if (!(to_find[b]))
			return ((char *)str + a);
		b = 0;
		a++;
	}
	return (0);
}
