/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 22:21:54 by stee              #+#    #+#             */
/*   Updated: 2025/08/27 15:12:09 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	difference;
	int	*array;
	int	i;

	difference = max - min;
	if (min >= max)
		return (NULL);
	array = (int *) malloc(difference * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min = 20;
	int	max = 20;
	int	i = 0;
	int	*range = ft_range(min, max);
	int	difference = max - min;

	while (i < difference)
	{
		printf("%d\n", range[i]);
		i++;
	}
}
*/
