/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 23:51:59 by stee              #+#    #+#             */
/*   Updated: 2025/08/26 15:40:28 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	factorial = 1;
	while (nb > 1)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;

	n = 0;

	printf("Number: %d\n", n);
	printf("Result: %d", ft_iterative_factorial(n));
	return (0);
}
*/
