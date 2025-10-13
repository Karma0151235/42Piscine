/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:20:40 by stee              #+#    #+#             */
/*   Updated: 2025/08/20 16:49:49 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sum;
	int	sign;

	i = 0;
	sum = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum *= 10;
		sum += str[i] - '0';
		i++;
	}
	return (sign * sum);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "    +-+-+-2314523";

	printf("String: %s\nInteger: %d\n", str, ft_atoi(str));
	return (0);
}
*/
