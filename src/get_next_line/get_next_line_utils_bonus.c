/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliu <lliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:05:42 by srall             #+#    #+#             */
/*   Updated: 2023/07/14 18:43:46 by lliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

int	nl_include(const char *s)
{
	if (!s)
		return (0);
	while (*s)
	{
		if (*s++ == '\n')
			return (1);
	}
	return (0);
}

char	*ft_joint(char *temp, char *buf)
{
	char	*res;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	while (temp[i])
		i++;
	while (buf[j])
		j++;
	res = (char *)ft_calloc(sizeof(char), (i + j + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (temp[i])
		res[len++] = temp[i++];
	while (buf[j])
		res[len++] = buf[j++];
	res[len] = '\0';
	free(temp);
	return (res);
}

char	*gettempstr(int fd, int num_read, char *buff, char *staticstr)
{
	char	*temp;

	if (!staticstr)
	{
		temp = (char *)malloc(sizeof(char) * 1);
		if (!temp)
			return (NULL);
		temp[0] = '\0';
	}
	while (num_read == BUFFER_SIZE && !nl_include(buff))
	{
		num_read = read(fd, buff, BUFFER_SIZE);
		if (num_read < 0)
			return (NULL);
		buff[num_read] = '\0';
		if (!staticstr)
			temp = ft_joint(temp, buff);
		else
			temp = ft_joint(staticstr, buff);
		staticstr = NULL;
		if (!temp)
			return (NULL);
	}
	return (temp);
}

char	*ft_line(char *temp)
{
	char	*line;
	int		i;

	line = NULL;
	i = 0;
	if (!temp[i])
		return (NULL);
	while (temp[i])
	{
		if (temp[i++] == '\n')
			break ;
	}
	line = (char *)malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (temp[i] && temp[i] != '\n')
	{
		line[i] = temp[i];
		i++;
	}
	if (temp[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*ft_staticstr(char *temp)
{
	char	*staticstr;
	int		i;
	int		j;

	staticstr = NULL;
	i = 0;
	j = 0;
	if (!temp[i])
		return (NULL);
	while (temp[i])
		i++;
	while (temp[j] && temp[j] != '\n')
		j++;
	staticstr = (char *)malloc(sizeof(char) * (i - j + 1));
	if (!staticstr)
		return (NULL);
	if (temp[j] == '\n')
		j++;
	i = 0;
	while (temp[j])
		staticstr[i++] = temp[j++];
	staticstr[i] = '\0';
	return (staticstr);
}
