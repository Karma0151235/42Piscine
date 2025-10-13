/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:15:18 by stee              #+#    #+#             */
/*   Updated: 2025/08/19 18:40:17 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[] = "Destination";
	char src[] = "Source";

	printf("Before: %s\n", dest);
	ft_strcpy(dest, src);
	printf("After: %s\n", dest);
	return (0);
}
*/
