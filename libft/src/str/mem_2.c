/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <cmalfroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:44:14 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/12/11 11:16:58 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/str.h"

inline void	*ft_memmove(void *dst, void const *src, size_t len)
{
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		return (ft_memrcpy(dst, src, len));
	return (dst);
}

inline void	*ft_memrcpy(void *dst, void const *src, size_t n)
{
	while (n)
	{
		--n;
		*((uint8_t *)dst + n) = *((uint8_t const *)src + n);
	}
	return (dst);
}

inline void	*ft_memset(void *b, int c, size_t len)
{
	void *r;

	r = b;
	while (len--)
		*(uint8_t *)b++ = (uint8_t)c;
	return (r);
}

inline void	*ft_memdup(void const *src, size_t n)
{
	return (ft_memcpy(ft_malloc(n), src, n));
}
