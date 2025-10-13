/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:40:32 by stee              #+#    #+#             */
/*   Updated: 2025/08/12 12:44:17 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char str1[] = "abcdef123gh";
	char str2[] = "abcAB\nabc";

	printf("%s, %d\n", str1, ft_str_is_printable(str1));
	printf("%s, %d\n", str2, ft_str_is_printable(str2));
	return (0);
}
*/