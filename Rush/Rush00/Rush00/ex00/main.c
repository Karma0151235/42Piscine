/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nichoo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:36:02 by nichoo            #+#    #+#             */
/*   Updated: 2025/08/09 21:50:49 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	print_box(int col, int row);

int	ft_atoi(char *a)
{
	int	index;
	
	index = 0;
	while (a[index])
	{
		a[index] = a[index] + 48;
		index++;
	}
	
	
}

void	print_error(void)
{
	write(2, "ERROR!!!", 8);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	int x = atoi(av[1]);
	int y = atoi(av[2]);
	if ((x <= 0) || (y <= 0))
	{
		print_error();
		return (0);
	}
	print_box(x, y);
	return (0);
}
