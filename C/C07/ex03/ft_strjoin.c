/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 22:35:45 by stee              #+#    #+#             */
/*   Updated: 2025/08/27 15:11:07 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_total(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	if (size <= 0)
		total = 1;
	else
	{
		while (i < size)
			total += ft_strlen(strs[i++]);
		total += ft_strlen(sep) * (size - 1);
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*final;

	final = (char *) malloc((ft_total(size, strs, sep) + 1) * sizeof(char));
	if (final == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (size > i)
	{
		j = 0;
		while (strs[i][j] != '\0')
			final[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != (size - 1))
			final[k++] = sep[j++];
		i++;
	}
	final[k] = '\0';
	return (final);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"This", "Is", "A", "Test", "Case"};
	int	size = 5;
	char	*sep = " ";
	char	*final = ft_strjoin(size, strs, sep);

	printf("Final String: %s\n", final);
	return (0);
}
*/
