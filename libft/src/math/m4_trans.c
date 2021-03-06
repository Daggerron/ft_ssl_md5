/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m4_trans.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <cmalfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:52:30 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/12/10 15:02:33 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/math/m4.h"

inline t_m4		ft_m4_transx(float s)
{
	return (ft_m4(
		ft_m1(1, 0, 0, s),
		ft_m1(0, 1, 0, 0),
		ft_m1(0, 0, 1, 0),
		ft_m1(0, 0, 0, 1)));
}

inline t_m4		ft_m4_transy(float s)
{
	return (ft_m4(
		ft_m1(1, 0, 0, 0),
		ft_m1(0, 1, 0, s),
		ft_m1(0, 0, 1, 0),
		ft_m1(0, 0, 0, 1)));
}

inline t_m4		ft_m4_transz(float s)
{
	return (ft_m4(
		ft_m1(1, 0, 0, 0),
		ft_m1(0, 1, 0, 0),
		ft_m1(0, 0, 1, s),
		ft_m1(0, 0, 0, 1)));
}
