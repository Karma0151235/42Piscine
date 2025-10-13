/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkoothra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:18:45 by rkoothra          #+#    #+#             */
/*   Updated: 2025/08/16 20:54:15 by rkoothra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	left_visible(int seq[4])
{
	int	i;
	int	max;
	int	seen;

	i = 0;
	max = 0;
	seen = 0;
	while (i < 4)
	{
		if (seq[i] > max)
		{
			max = seq[i];
			seen++;
		}
		i++;
	}
	return (seen);
}

int	right_visible(int seq[4])
{
	int	i;
	int	max;
	int	seen;

	i = 3;
	max = 0;
	seen = 0;
	while (i >= 0)
	{
		if (seq[i] > max)
		{
			max = seq[i];
			seen++;
		}
		i--;
	}
	return (seen);
}

void	print_grid(int grid[4][4])
{
	int		r;
	int		c;
	char	ch;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			ch = '0' + grid[r][c];
			ft_putchar(ch);
			if (c != 3)
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
