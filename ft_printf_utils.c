/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 02:03:15 by lbrum-go          #+#    #+#             */
/*   Updated: 2023/09/20 03:41:51 by lbrum-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_counthex(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static char	*ft_putstrhex(unsigned long n, char *base)
{
	int		size;
	char	*hex;

	size = ft_counthex(n);
	hex = (char *)malloc(sizeof(char) * (size + 1));
	if (!hex)
		return (NULL);
	hex[size] = '\0';
	while (size > 0)
	{
		hex[size - 1] = base[n % 16];
		n = n / 16;
		size--;
	}
	return (hex);
}

int	ft_puthex(unsigned int nbr, char *base)
{
	char	*str;
	int		len;

	str = ft_putstrhex(nbr, base);
	len = ft_putstr(str);
	free(str);
	return (len);
}

int	put_pointer(void *nbr, char *base)
{
	int				len;
	char			*str;
	unsigned long	n;

	n = (unsigned long)nbr;
	str = ft_putstrhex(n, base);
	len = ft_putstr(str);
	free(str);
	return (len);
}
