/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:11:27 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/11 10:38:25 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>

int	ft_printf(const char str*, ...);

void	ft_uputnbr_fd(unsigned int nbr, int fd)
{
	if (nbr > 9)
	{
		ft_uputnbr_fd(nbr / 10, fd);
	}
	ft_putchar_fd(((nbr % 10) + '0'), fd);
}

void	ft_puthexa_fd(long unsigned int nbr, int size, int fd)
{
	char	*basemin;
	char	*basemaj;

	basemin = "0123456789abcdef";
	basemaj = "0123456789ABCDEF";
	if (nbr > 16)
		ft_puthexa_fd((nbr / 16), size, fd);
	if (size == 0)
		ft_putchar_fd(basemin[nbr % 16], fd);
	else
		ft_putchar_fd(basemaj[nbr % 16], fd);
}

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
	int		posflag;

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
