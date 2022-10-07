/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:11:27 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/07 17:19:17 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>

int ft_printf(const char *, ...);

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
