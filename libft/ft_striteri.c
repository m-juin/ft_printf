/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:57:21 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/01 12:46:31 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	pos;

	pos = 0;
	if (f == NULL || s == NULL)
		return ;
	while (s[pos])
	{
		f(pos, &s[pos]);
		pos++;
	}
}
