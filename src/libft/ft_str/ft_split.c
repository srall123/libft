/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliu <lliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:23:32 by lliu              #+#    #+#             */
/*   Updated: 2022/11/12 21:29:10 by lliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*find_word(char const *s, char c)
{
	char		*word;
	char		*temp;
	char const	*temp_word;
	int			len_word;

	len_word = 0;
	temp_word = s;
	while (*temp_word != c && *temp_word)
	{
		len_word++;
		temp_word++;
	}
	temp = (char *)malloc(len_word + 1);
	if (!temp)
		return (NULL);
	word = temp;
	while (*s != c && *s)
		*temp++ = *s++;
	*temp = 0;
	return (word);
}

static int	ft_count_words(const char *s, char c)
{
	int	num_c;

	num_c = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
			num_c++;
		while (*s != c && *s)
			s++;
	}
	return (num_c);
}

static char	*ft_fornorm(char const *temp, char c)
{
	if (!temp)
		return (NULL);
	while (*temp == c && *temp)
		temp++;
	return ((char *)temp);
}

void	ft_split_fornorm(char **dst, char *sub_s, char c)
{
	int	i;

	i = 0;
	while (*sub_s)
	{
		sub_s = ft_fornorm(sub_s, c);
		dst[i] = find_word(sub_s, c);
		if (!dst[i])
		{
			while (i >= 0)
			{
				free(dst[i]);
				i--;
			}
			free(dst);
			return ;
		}
		i++;
		sub_s = ft_strchr(sub_s, c);
		sub_s = ft_fornorm(sub_s, c);
		if (!sub_s)
			break ;
	}
	dst[i] = 0;
	return ;
}

char	**ft_split(char const *s, char c)
{
	char	*sub_s;
	char	**dst;

	if (!s)
		return (NULL);
	dst = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	if (ft_count_words(s, c) != 0)
	{
		sub_s = (char *)s;
		ft_split_fornorm(dst, sub_s, c);
	}
	else
		dst[0] = 0;
	return (dst);
}
