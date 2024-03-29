/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:09:59 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/12 13:16:38 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr_fd(char *s, int fd)
{
	size_t	pos;

	if (s == NULL)
		s = "(null)";
	pos = 0;
	while (s[pos])
	{
		ft_putchar_fd(s[pos], fd);
		pos++;
	}
	return (pos);
}
