/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 10:16:59 by stee              #+#    #+#             */
/*   Updated: 2025/08/25 13:51:10 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-'
			|| base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		baselength;

	if (valid_base(base) == 0)
		return ;
	baselength = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= baselength)
	{
		ft_putnbr_base(n / baselength, base);
		ft_putnbr_base(n % baselength, base);
	}
	else
		ft_putchar(base[n]);
}
/*
int	main(void)
{
	char	decimal[] = "0123456789";
	char	binary[] = "01";
	char	octal[] = "01234567";
	char	hexa[] = "0123456789abcdef";
	char	fakebase[] = {'\0'};

	int	n;
	
	n = 0;
	ft_putnbr_base(n, decimal);
	ft_putchar('\n');
	ft_putnbr_base(n, binary);
	ft_putchar('\n');
	ft_putnbr_base(n, octal);
	ft_putchar('\n');
	ft_putnbr_base(n, hexa);
	ft_putchar('\n');
	ft_putnbr_base(n, fakebase);
	return (0);
}
*/
