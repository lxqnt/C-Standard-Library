/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquint <aquint@42.us.org>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 00:16:17 by aquint            #+#    #+#             */
/*   Updated: 2017/10/13 15:19:31 by aquint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		cpy_line(char **data, char **line, const int fd)
{
	int		i;
	int		len;
	char	*tmp_data;
	char	*tmp_line;

	tmp_data = data[fd];
	i = ft_strcount(tmp_data, '\n');
	len = ft_strlen(tmp_data);
	tmp_line = ft_strsub(tmp_data, 0, i);
	ft_memmove(tmp_data, &tmp_data[i + 1], len);
	tmp_data[len] = '\0';
	data[fd] = tmp_data;
	*line = tmp_line;
}

char		**set_fd(char **data, const int fd)
{
	char	*tmpd;
	int		len;

	if (!(data))
	{
		if (!(data = (char**)ft_memalloc(sizeof(*data) * 5000)))
			return (0);
	}
	if (!(data[fd]))
	{
		if (!(data[fd] = ft_strnew(BUFF_SIZE)))
			return (0);
		return (data);
	}
	len = ft_strlen(data[fd]);
	if (!(tmpd = ft_strnew(len + BUFF_SIZE)))
		return (0);
	ft_strncpy(tmpd, data[fd], len);
	ft_strdel(&data[fd]);
	data[fd] = tmpd;
	return (data);
}

int			get_next_line(const int fd, char **line)
{
	static char		**data;
	int				ret;

	if (!line || BUFF_SIZE <= 0)
		return (-1);
	if (!(data = set_fd(data, fd)))
		return (-1);
	while ((ret = read(fd, &(data[fd][ft_strlen(data[fd])]), BUFF_SIZE)) > 0)
	{
		if (ft_memchr(data[fd], '\n', (ft_strlen(data[fd]))))
		{
			cpy_line(data, line, fd);
			return (1);
		}
		set_fd(data, fd);
	}
	if (ret < 0)
		return (-1);
	ret = ft_strlen(data[fd]);
	if (ret != 0)
	{
		cpy_line(data, line, fd);
		return (1);
	}
	return (0);
}
