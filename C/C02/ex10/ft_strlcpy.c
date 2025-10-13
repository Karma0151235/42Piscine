/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:06:40 by stee              #+#    #+#             */
/*   Updated: 2025/08/19 18:37:59 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_length(src));
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "testcase";
	char dest[11];
	int	n = 6;

	printf("Source: %s\n
	Length Returned: %d\n
	Destination: %s\n", str1, ft_strlcpy(dest, str1, n), dest);
	return (0);
}
*/
