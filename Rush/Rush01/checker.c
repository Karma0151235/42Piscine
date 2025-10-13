/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkoothra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:02:31 by rkoothra          #+#    #+#             */
/*   Updated: 2025/08/16 19:02:38 by rkoothra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstring(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	input_checker(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]);
		if (i != 31)
			return (1);
		else
			i = 0;
		while (argv[1][i])
		{
			if (i % 2 == 0 && (argv[1][i] > '4' || argv[1][i] < '1'))
				return (1);
			else if (i % 2 == 1 && argv[1][i] != ' ')
				return (1);
			i++;
		}
		return (0);
	}
	return (1);
}
