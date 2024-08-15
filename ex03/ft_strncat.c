/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:47:41 by onosul            #+#    #+#             */
/*   Updated: 2024/08/13 11:44:22 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	if (nb == 0)
	{
		return (dest);
	}
	temp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && i < nb)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	dest = temp;
	return (dest);
}

int main()
{
	char * a = "abc\0";

	
	char * b = "dio";
	unsigned int i = 2;

}