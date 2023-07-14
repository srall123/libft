/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliu <lliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:04:09 by srall             #+#    #+#             */
/*   Updated: 2023/07/14 18:43:42 by lliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			i;
	char		*buff;
	char		*temp;
	char		*line;
	static char	*staticstr[4096];

	i = 0;
	temp = NULL;
	line = NULL;
	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0 || !buff)
		return (NULL);
	while (i < BUFFER_SIZE + 1)
		buff[i++] = 0;
	temp = gettempstr(fd, BUFFER_SIZE, buff, staticstr[fd]);
	free(buff);
	if (!temp)
		return (NULL);
	line = ft_line(temp);
	staticstr[fd] = ft_staticstr(temp);
	free(temp);
	return (line);
}
