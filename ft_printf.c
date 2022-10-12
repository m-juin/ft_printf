/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:11:27 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/11 13:10:57 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_convert(const char *str, int pos, va_list arglist)
{
	if (str[pos] == '%')
		ft_putchar_fd(str[pos], 1);
	else if (str[pos] == 'c')
		ft_putchar_fd(va_arg(arglist, int), 1);
	else if (str[pos] == 's')
		ft_putstr_fd(va_arg(arglist, char *), 1);
	else if (str[pos] == 'i')
		ft_putnbr_fd(va_arg(arglist, int), 1);
	else if (str[pos] == 'u')
		ft_uputnbr_fd(va_arg(arglist, unsigned int), 1);
	else if (str[pos] == 'x')
		ft_puthexa_fd(va_arg(arglist, unsigned int), 0, 1);
	else if (str[pos] == 'X')
		ft_puthexa_fd(va_arg(arglist, unsigned int), 1, 1);
	else if (str[pos] == 'p')
	{
		ft_putstr_fd("0x", 1);
		ft_puthexa_fd(va_arg(arglist, long unsigned int), 0, 1);
	}
	else if (str[pos] != '\0')
	{
		ft_putchar_fd(str[pos - 1], 1);
		ft_putchar_fd(str[pos], 1);
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	arglist;
	int		pos;

	va_start(arglist, str);
	pos = 0;
	while (str[pos])
	{
		if (str[pos] == '%')
		{
			pos++;
			ft_convert(str, pos, arglist);
		}
		else
			ft_putchar_fd(str[pos], 1);
		pos++;
	}
	return (pos);
}
