/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:25:23 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/14 15:58:59 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	wc;
	int	going;

	i = 0;
	wc = 0;
	going = 0;
	while (s[i])
	{
		if (s[i] != c && !going)
			going = 1;
		if ((s[i] == c && going) || s[i + 1] == '\0')
		{
			wc++;
			going = 0;
		}
		i++;
	}
	return (wc);
}

int	ft_wordlen(char const *s, int start, char c)
{
	int	i;

	i = start;
	while (s[i] && s[i] != c)
		i++;
	printf("\nWL = %d/%d\n", i, start);
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int	i;
	int	j;
	int	k;
	int	wc;

	res = NULL;
	if (! s || ! c)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	wc = ft_countwords(s, c);

	printf("\nWC = %d\n", wc);

	res = malloc(wc * sizeof(char *));
	while (i < wc)
	{
		//printf("\n%d - %d = %d\n", k, j, ft_wordlen(s, k, c));
		res[i] = malloc(ft_wordlen(s, k, c) + 1);
		if (! res[i])
			return (NULL);
		while (j < ft_wordlen(s, k, c))
		{
			res[i][j] = s[k];
			j++;
			k++;
		}
		res[i][j] = '\0';
		printf("%s\n", res[i]);
		j = 0;

		i++;
	}
	
	return (char **)res;
}
