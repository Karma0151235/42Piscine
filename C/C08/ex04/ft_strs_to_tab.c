/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:07:54 by stee              #+#    #+#             */
/*   Updated: 2025/08/27 21:36:46 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (result == NULL)
		return (NULL);
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
	result[i] = 0;
	return (result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	t_stock_str	*temp;
	int			i;

	i = 0;
	result = malloc(sizeof(t_stock_str) * (ac + 1));
	if (result == NULL)
		return (NULL);
	temp = result;
	while (i < ac)
	{
		result->size = ft_strlen(av[i]);
		result->str = av[i];
		result->copy = ft_strdup(av[i]);
		i++;
		if (result->copy == NULL)
			return (NULL);
		result++;
	}
	result->size = 0;
	result->str = 0;
	result->copy = 0;
	return (temp);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	t_stock_str	*result;
	
	result = ft_strs_to_tab(ac, av);
	int	i = 0;
	while (i < ac)
	{
		printf("%d, %s, %s\n", result->size, result->str, result->copy);
		result++;
		i++;
	}
}
*/
