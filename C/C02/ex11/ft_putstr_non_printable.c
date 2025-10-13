/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:20:06 by stee              #+#    #+#             */
/*   Updated: 2025/08/18 16:44:32 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_printhexa(unsigned char input)
{
	char	*base16;

	base16 = "0123456789abcdef";
	ft_putchar(base16[input / 16]);
	ft_putchar(base16[input % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_printhexa(str[i]);
		}
		i++;
	}
}
/*
int	main(void)
{
	char str1[] = "thisis\natest";

	ft_putstr_non_printable(str);
	return (0);
}
*/