/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:49:39 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/11 11:14:14 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "libft/libft.h"

void	ft_uputnbr_fd(unsigned int nbr, int fd);
void	ft_puthexa_fd(long unsigned int nbr, int size, int fd);
int		ft_printf(const char *, ...);

#endif
