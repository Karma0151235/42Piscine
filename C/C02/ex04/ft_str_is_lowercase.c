/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:20:05 by stee              #+#    #+#             */
/*   Updated: 2025/08/11 20:21:30 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char str1[] = "abcdefgh";
	char str2[] = "abcABCabc";

	printf("%s, %d\n", str1, ft_str_is_lowercase(str1));
	printf("%s, %d\n", str2, ft_str_is_lowercase(str2));
	return (0);
}
*/