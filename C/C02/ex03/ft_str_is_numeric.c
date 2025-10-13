/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:14:41 by stee              #+#    #+#             */
/*   Updated: 2025/08/11 20:17:16 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char str1[] = "0123456789";
	char str2[] = "abc0123";

	printf("%s, %d\n", str1, ft_str_is_numeric(str1));
	printf("%s, %d\n", str2, ft_str_is_numeric(str2));
	return (0);
}
*/