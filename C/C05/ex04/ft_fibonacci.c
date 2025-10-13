/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:19:30 by stee              #+#    #+#             */
/*   Updated: 2025/08/26 12:42:43 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 3;
	n2 = 4;
	n3 = 5;
	printf("Index: %d, Value: %d\n", n1, ft_fibonacci(n1));
	printf("Index: %d, Value: %d\n", n2, ft_fibonacci(n2));
	printf("Index: %d, Value: %d\n", n3, ft_fibonacci(n3));
	return (0);
}
*/
