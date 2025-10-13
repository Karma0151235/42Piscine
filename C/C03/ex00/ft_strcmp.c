/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:48:41 by stee              #+#    #+#             */
/*   Updated: 2025/08/19 18:43:19 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "test";
	char str2[] = "Test";

	printf("Original Function: %d\n", strcmp(str1, str2));
	printf("My Function: %d\n", ft_strcmp(str1, str2));
	return 0;
}
*/
