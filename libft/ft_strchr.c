/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:02:00 by lbrum-go          #+#    #+#             */
/*   Updated: 2023/04/20 10:03:19 by lbrum-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	while (*str && (unsigned char)c != *str)
		str++;
	if ((unsigned char)c == *str)
		return ((char *)str);
	return (0);
}
