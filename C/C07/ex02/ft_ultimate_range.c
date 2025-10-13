/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 22:28:37 by stee              #+#    #+#             */
/*   Updated: 2025/08/27 15:13:00 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	difference;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	difference = max - min;
	array = (int *) malloc(difference * sizeof(int));
	if (array == NULL)
		return (0);
	i = 0;
	if (array != NULL)
	{
		while (min < max)
			array[i++] = min++;
		*range = array;
		return (i);
	}
	else
		return (-1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min = 10;
	int	max = 10;
	int	i = 0;
	int	*range;
	int	size = ft_ultimate_range(&range, min, max);

	i = 0;
	printf("Return Value: %d\n", size);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}
*/
