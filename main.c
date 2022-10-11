/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:50:12 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/11 10:14:08 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *, ...);

int	main(void)
{

	int	i = 958;
	printf("Base = %p\n", &i);
	ft_printf("Custom = %p", &i);
	return (0);
}
