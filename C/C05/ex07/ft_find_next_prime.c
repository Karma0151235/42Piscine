/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:05:30 by stee              #+#    #+#             */
/*   Updated: 2025/08/26 13:21:36 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (is_prime(nb) == 1)
		return (nb);
	while (1)
	{
		if (is_prime(nb) == 1)
			return (nb);
		nb++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = -2147483648;
	printf("Next Prime: %d", ft_find_next_prime(nb));
	return (0);
}
*/
