/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:18:02 by stee              #+#    #+#             */
/*   Updated: 2025/08/20 16:17:03 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	nb1;
	int	nb2;
	int	nb3;
	int	nb4;
	int	nb5;

	nb = 1;
	nb1 = 200;
	nb2 = 3000;
	nb3 = 40000;
	nb4 = 2147483647;
	nb5 = -2147483648;

	ft_putnbr(nb);
	ft_putchar('\n');
	ft_putnbr(nb1);
	ft_putchar('\n');
	ft_putnbr(nb2);
	ft_putchar('\n');
	ft_putnbr(nb3);
	ft_putchar('\n');
	ft_putnbr(nb4);
	ft_putchar('\n');
	ft_putnbr(nb5);
	return (0);
}
*/
