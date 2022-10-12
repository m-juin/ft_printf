/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:49:39 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/12 13:02:31 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "libft/libft.h"

size_t	ft_uputnbr_fd(unsigned int nbr, int fd);
size_t	ft_puthexa_fd(long unsigned int nbr, int size, int fd, int pointer);
int		ft_printf(const char *, ...);

#endif
