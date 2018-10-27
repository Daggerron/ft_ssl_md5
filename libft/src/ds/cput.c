/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfro <cmalfro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:52:33 by cmalfro           #+#    #+#             */
/*   Updated: 2017/11/07 09:53:34 by cmalfro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ds.h"

inline void	*ft_deqcput(t_deq *self, size_t idx, void *item)
{
	return (ft_memcpy(ft_deqput(self, idx), item, self->isz));
}

inline char	*ft_sdscput(t_sds *self, size_t idx, char item)
{
	char *it;

	it = ft_sdsput(self, idx);
	*it = item;
	return (it);
}

inline void	*ft_veccput(t_vec *self, size_t idx, void *item)
{
	return (ft_memcpy(ft_vecput(self, idx), item, self->isz));
}
