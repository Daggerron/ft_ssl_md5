/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfro <cmalfro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:52:33 by cmalfro           #+#    #+#             */
/*   Updated: 2017/11/07 09:53:34 by cmalfro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ds.h"

inline void	ft_deqclr(t_deq *self, t_dtor idtor)
{
	char	*item;

	if (self->buf && idtor)
	{
		item = ft_deqbeg(self) - self->isz;
		while ((item += self->isz) != ft_deqend(self))
			idtor(item);
		self->len = self->cur;
	}
}

inline void	ft_mapclr(t_map *self)
{
	if (self->bucks)
	{
		ft_memset(self->bucks, BUCKET_EMPTY, self->cap);
		self->len = 0;
		self->occupieds = 0;
	}
}

inline void	ft_setclr(t_set *self)
{
	if (self->bucks)
	{
		ft_memset(self->bucks, BUCKET_EMPTY, self->cap);
		self->len = 0;
		self->occupieds = 0;
	}
}

inline void	ft_vecclr(t_vec *self, t_dtor idtor)
{
	char	*item;

	if (self->buf && idtor)
	{
		item = (char *)ft_vecbeg(self) - self->isz;
		while ((item += self->isz) != (char *)ft_vecend(self))
			idtor(item);
		self->len = 0;
	}
}
