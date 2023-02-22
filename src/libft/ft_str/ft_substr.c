/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lliu <lliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:26:02 by lliu              #+#    #+#             */
/*   Updated: 2022/11/10 11:40:06 by lliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 从第start-1个(index of string)字符开始复制s,一共len个字符.
 * 是否需要在最后赋零\0???memcpy原型中也没有赋零! */

#include "libft.h"

static int	ft_min2(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;
	int		n;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	n = ft_min2(((int)ft_strlen(s) - (int)start), (int)len);
	temp = (char *)malloc(sizeof(char) * (n + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (i < n)
	{
		temp[i] = s[start + i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
