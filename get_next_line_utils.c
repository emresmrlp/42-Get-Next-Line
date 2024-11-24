/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral <ysumeral@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:01:42 by ysumeral          #+#    #+#             */
/*   Updated: 2024/11/24 10:30:18 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	i;

	i = 0;
	if (!str || start >= ft_strlen(str))
		return (NULL);
	if (len > ft_strlen(str) - start)
		len = ft_strlen(str) - start;
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	while (str[start + i] && i < len)
	{
		buffer[i] = str[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
