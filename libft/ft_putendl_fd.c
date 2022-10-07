/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:09:59 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/01 15:16:07 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	pos;

	if (s == NULL)
		return ;
	pos = 0;
	while (s[pos])
		write(fd, &s[pos++], 1);
	write(fd, "\n", 1);
}
