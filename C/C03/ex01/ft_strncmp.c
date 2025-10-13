/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:51:49 by stee              #+#    #+#             */
/*   Updated: 2025/08/23 23:53:39 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "Test";
	char str2[] = "Test";
	int	n = 5;

	printf("Original Function: %d\n", strncmp(str1, str2, n));
	printf("My Function: %d\n", ft_strncmp(str1, str2, n));
	return 0;
}
*/
