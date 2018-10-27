/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfro <cmalfro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:52:33 by cmalfro           #+#    #+#             */
/*   Updated: 2017/11/18 09:54:36 by null             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/fs.h"

inline char	const	*ft_basename(char const *path)
{
	char const *ret;

	if ((ret = ft_strrchr(path, '/')))
		return (++ret);
	return (path);
}
