/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrum-go <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 02:02:40 by lbrum-go          #+#    #+#             */
/*   Updated: 2023/09/20 03:41:15 by lbrum-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_arg(const char *tipoformat, int i, va_list argum)
{
	if (tipoformat[i + 1] == 'c')
		return (ft_putchar(va_arg(argum, int)));
	else if (tipoformat[i + 1] == 's')
		return (ft_putstr(va_arg(argum, char *)));
	else if (tipoformat[i + 1] == 'p')
		return (ft_putstr("0x") + put_pointer(va_arg(argum, void *), \
				"0123456789abcdef"));
	else if (tipoformat[i + 1] == 'd' || tipoformat[i + 1] == 'i')
		return (ft_putnbrr(va_arg(argum, int)));
	else if (tipoformat[i + 1] == 'u')
		return (ft_putnbru(va_arg(argum, unsigned int)));
	else if (tipoformat[i + 1] == 'x' || tipoformat[i + 1] == 'X')
	{
		if (tipoformat[i + 1] == 'X')
			return (ft_puthex(va_arg(argum, unsigned int), "0123456789ABCDEF"));
		else
			return (ft_puthex(va_arg(argum, unsigned int), "0123456789abcdef"));
	}
	else if (tipoformat[i + 1] == '%')
		return (ft_putchar(tipoformat[i + 1]));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	argum;
	int		i;
	int		pos_carac;

	i = 0;
	pos_carac = 0;
	va_start(argum, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			pos_carac += ft_printf_arg(format, i, argum);
			i++;
		}
		else
			pos_carac += ft_putchar(format[i]);
		i++;
	}
	va_end(argum);
	return (pos_carac);
}
