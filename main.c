/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:50:12 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/10 16:42:31 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *, ...);

int	main(void)
{

	int	i = 958;
	printf("%p \n", &i);
	ft_printf("%p", &i);
	return (0);
}
