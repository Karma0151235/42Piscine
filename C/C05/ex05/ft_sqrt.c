/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:40:39 by stee              #+#    #+#             */
/*   Updated: 2025/08/26 12:44:39 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 9;
	printf("Number: %d\nSquare Root: %d\n", nb, ft_sqrt(nb));
	return (0);
}
*/
