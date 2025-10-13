/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:19:45 by stee              #+#    #+#             */
/*   Updated: 2025/08/19 17:34:52 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char str1[] = "T stndo";
	char str2[] = "Testndo";

	printf("%s, %d\n", str1, ft_str_is_alpha(str1));
	printf("%s, %d\n", str2, ft_str_is_alpha(str2));
	return (0);
}
*/
