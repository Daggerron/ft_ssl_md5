/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <cmalfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:52:33 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/11/17 09:51:01 by null             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/io.h"

inline ssize_t	ft_putd(int fd, float n, int precision, uint8_t base)
{
	char	buf[20];

	return (ft_write(fd, buf, (size_t)ft_floatstr(buf, n, precision, base)));
}

inline ssize_t	ft_putn(int fd, int64_t n, uint8_t base)
{
	char	buf[20];

	return (ft_write(fd, buf, (size_t)ft_intstr(buf, n, base)));
}

inline ssize_t	ft_putu(int fd, uint64_t n, uint8_t base)
{
	char	buf[20];

	return (ft_write(fd, buf, (size_t)ft_uintstr(buf, n, base)));
}
