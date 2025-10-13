/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:16:56 by stee              #+#    #+#             */
/*   Updated: 2025/08/26 12:35:51 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power != 0)
		{
			ans *= nb;
			power--;
		}
	}
	return (ans);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;
	int	power;

	n = 2;
	power = 3;

	printf("Number: %d, Power: %d\n", n, power);
	printf("Result: %d", ft_iterative_power(n, power));
	return (0);
}
*/
