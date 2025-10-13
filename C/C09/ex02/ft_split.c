/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szholbol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 19:42:48 by szholbol          #+#    #+#             */
/*   Updated: 2025/08/28 22:29:31 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *set)
{
	int	i;

	if (!set)
		return (0);
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *s, char *set)
{
	int	i;
	int	count;

	if (!s || !*s)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (!is_sep(s[i], set) && (i == 0 || is_sep(s[i - 1], set)))
			count++;
		i++;
	}
	return (count);
}

char	*dup_word(char *s, char *set, int *len_out)
{
	char	*p;
	int		len;
	int		i;

	len = 0;
	while (s[len] && !is_sep(s[len], set))
		len++;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	*len_out = len;
	return (p);
}

int	push_word(char **tab, int *idx, char **p, char *set)
{
	int		wlen;

	tab[*idx] = dup_word(*p, set, &wlen);
	if (!tab[*idx])
		return (0);
	(*idx)++;
	*p += wlen;
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	char	*p;
	int		idx;

	tab = (char **)malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	p = str;
	idx = 0;
	while (*p)
	{
		if (is_sep(*p, charset))
			p++;
		else if (!push_word(tab, &idx, &p, charset))
			return (NULL);
	}
	tab[idx] = NULL;
	return (tab);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
    char **tab;
    int i;

    if (ac != 3)
    {
        printf("Usage: %s <str> <charset>\n", av[0]);
        return 1;
    }
    tab = ft_split(av[1], av[2]);
    if (!tab)
    {
        printf("NULL\n");
        return 1;
    }
    i = 0;
    while (tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }
    i = 0;
    while (tab[i])
    {
        free(tab[i]);
        i++;
    }
    free(tab);
    return 0;
}
*/
