/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:19:06 by stee              #+#    #+#             */
/*   Updated: 2025/08/26 17:47:05 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long int	n;

	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putstr(par->copy);
		ft_putchar('\n');
		par++;
	}
}
/*
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	t_stock_str	*result;

	result = ft_strs_to_tab(ac, av);
	ft_show_tab(result);
}
*/
