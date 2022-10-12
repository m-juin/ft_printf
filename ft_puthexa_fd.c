/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:48:45 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/11 13:11:11 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
