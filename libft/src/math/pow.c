/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfro <cmalfro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:52:30 by cmalfro           #+#    #+#             */
/*   Updated: 2017/11/18 17:19:30 by null             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/math.h"

inline uint64_t	ft_pow(int64_t n, int16_t p)
{
	uint64_t	r;
	int64_t		t;

	r = 1;
	t = n;
	while (p)
	{
		if (p & 1)
			r *= t;
		t *= t;
		p = p >> 1;
	}
	return (r);
}
