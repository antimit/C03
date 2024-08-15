/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:04:24 by onosul            #+#    #+#             */
/*   Updated: 2024/08/13 13:19:54 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int main()
{
	char * a = "abc";
	char * b = "abc";

	int i;

	i = ft_strcmp(a,b);
	printf("%d",i);
}