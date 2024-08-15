/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:37:57 by onosul            #+#    #+#             */
/*   Updated: 2024/08/13 11:44:19 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*func(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	return (func(str, to_find));
}

char	*func(char *str, char *to_find)
{
	char	*pattern;
	char	*start;

	while (*str)
	{
		pattern = to_find;
		start = str;
		while (*pattern && *str && *pattern == *str)
		{
			str++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return (start);
		}
		str = start + 1;
	}
	return (NULL);
}
