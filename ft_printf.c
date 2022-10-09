/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:11:27 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/09 21:42:55 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>


int ft_printf(const char *, ...);

void ft_uputnbr_fd(unsigned int nbr, int fd)
{
	if (nbr > 9)
	{
		ft_uputnbr_fd(nbr / 10, fd);
	}
	ft_putchar_fd(((nbr % 10) + '0'), fd);
}



void ft_puthexa_fd(unsigned int nbr, int size, int fd)
{
	char	*basemin;
	char	*basemaj;

	basemin = "0123456789abcdef";
	basemaj = "0123456789ABCDEF";
	if (nbr > 16)
	{
		ft_puthexa_fd((nbr / 16), size, fd);
	}
	if (size == 0)
		ft_putchar_fd(basemin[nbr % 16], fd);
	else
		ft_putchar_fd(basemaj[nbr % 16], fd);
}

int	ft_printf(const char *str, ...)
{
	va_list	arglist;

	int	pos;
	va_start(arglist, str);
	pos = 0;
	/* Run trought str*/
	while (str[pos])
	{
		if (str[pos] == '%')
		{
			pos++;
			if (str[pos] == '%')
				ft_putchar_fd(str[pos], 1);
			else if (str[pos] == 'c')
				ft_putchar_fd(va_arg(arglist, int), 1);
			else if (str[pos] == 's')
				ft_putstr_fd(va_arg(arglist, char *), 1);
			else if (str[pos] == 'i')
				ft_putnbr_fd(va_arg(arglist, int), 1);
			else if (str[pos] == 'u')
				ft_uputnbr_fd(va_arg(arglist,unsigned int), 1);
			else if (str[pos] == 'x')
				ft_puthexa_fd(va_arg(arglist,unsigned int), 0, 1);
			else if (str[pos] == 'X')
				ft_puthexa_fd(va_arg(arglist,unsigned int), 1, 1);
			else
			{
				ft_putchar_fd(str[pos - 1], 1);
				ft_putchar_fd(str[pos], 1);
			}
		}
		else
			ft_putchar_fd(str[pos], 1);
		pos++;
	}
	return (pos);
}
