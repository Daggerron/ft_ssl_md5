/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fcntl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfro <cmalfro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:52:33 by cmalfro           #+#    #+#             */
/*   Updated: 2017/11/17 09:51:01 by null             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/io.h"

inline ssize_t	ft_read(int fd, void *buf, size_t sz)
{
	ssize_t		rd;

	while ((rd = read(fd, buf, sz)) < 0)
		if (errno != EINTR && errno != EAGAIN)
			return (ft_throw(WUT, FT_DBG));
	return (rd);
}

inline ssize_t	ft_write(int fd, void const *buf, size_t sz)
{
	ssize_t		wr;

	while ((wr = write(fd, buf, sz)) < 0)
		if (errno != EINTR && errno != EAGAIN)
			return (ft_throw(WUT, FT_DBG));
	return (wr);
}

inline int		ft_dup2std(int *io, int *src)
{
	if (io[STDIN_FILENO] >= 0 && io[STDIN_FILENO] != src[STDIN_FILENO])
	{
		if (dup2(io[STDIN_FILENO], src[STDIN_FILENO]) >= 0)
			close(io[STDIN_FILENO]);
	}
	if (io[STDOUT_FILENO] >= 0 && io[STDOUT_FILENO] != src[STDOUT_FILENO])
	{
		if (dup2(io[STDOUT_FILENO], src[STDOUT_FILENO]) >= 0)
			close(io[STDOUT_FILENO]);
	}
	if (io[STDERR_FILENO] >= 0 && io[STDERR_FILENO] != src[STDERR_FILENO])
	{
		if (dup2(io[STDERR_FILENO], src[STDERR_FILENO]) >= 0)
			close(io[STDERR_FILENO]);
	}
	return (YEP);
}

inline int		ft_read_all(int fd, char **line) {
	int			rd;
	char		buf[4096 + 1];
	char 	*	cpy;

	if (fd < 0)
		return (0);
	*line = ft_strnew(1);
	while ((rd = read(fd, buf, 4096)) != 0) {
		if (rd == ((buf[rd] = '\0') - 1))
			return (0);
		cpy = ft_strjoin(*line, buf);
		free(*line);
		*line = cpy;
	}
	return (1);
}