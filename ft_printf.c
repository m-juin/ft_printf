/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:11:27 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/21 11:45:19 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_convert(const char *str, int pos, va_list aglst)
{	
	int	size;

	size = 0;
	if (str[pos] == '%')
		size += ft_putchar_fd(str[pos], 1);
	else if (str[pos] == 'c')
		size += ft_putchar_fd(va_arg(aglst, int), 1);
	else if (str[pos] == 's')
		size += ft_putstr_fd(va_arg(aglst, char *), 1);
	else if (str[pos] == 'i' || str[pos] == 'd')
		size += ft_putnbr_fd(va_arg(aglst, int), 1);
	else if (str[pos] == 'u')
		size += ft_uputnbr_fd(va_arg(aglst, unsigned int), 1);
	else if (str[pos] == 'x')
		size += ft_puthexa_fd(va_arg(aglst, unsigned int), 0, 1, 0);
	else if (str[pos] == 'X')
		size += ft_puthexa_fd(va_arg(aglst, unsigned int), 1, 1, 0);
	else if (str[pos] == 'p')
		size += ft_puthexa_fd(va_arg(aglst, long unsigned int), 0, 1, 1);
	else if (str[pos] != '\0')
	{
		size = ft_putchar_fd(str[pos - 1], 1);
		size += ft_putchar_fd(str[pos], 1);
	}
	return (size);
}

int	ft_printf(const char *str, ...)
{
	va_list		arglist;
	int			pos;
	int			size;

	va_start(arglist, str);
	pos = 0;
	size = 0;
	while (str[pos])
	{
		if (str[pos] == '%')
		{
			pos++;
			size += ft_convert(str, pos, arglist);
		}
		else
			size += ft_putchar_fd(str[pos], 1);
		pos++;
	}
	va_end(arglist);
	return (size);
}
