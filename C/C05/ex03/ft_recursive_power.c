/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:25:26 by stee              #+#    #+#             */
/*   Updated: 2025/08/26 12:41:51 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
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
	printf("Result: %d", ft_recursive_power(n, power));
	return (0);
}
*/
