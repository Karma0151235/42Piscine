/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:18:27 by stee              #+#    #+#             */
/*   Updated: 2025/08/23 23:16:35 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;
	unsigned int	sum;

	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size > d)
		sum = d + s;
	else
		sum = s + size;
	while (src[i] != '\0' && size > (d + 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (sum);
}
/*
#include <stdio.h>

int	main(void)
{
	char str1[10] = "Dest";
	char str2[10] = "Src";
	int	size = 2;

	printf("Destination Before: %s\n", str1);
	printf("Result: %d\n", ft_strlcat(str1, str2, size));
	printf("Destination After: %s\n", str1);
	return 0;
}
*/
