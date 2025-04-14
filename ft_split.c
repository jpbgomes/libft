/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:25:23 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/14 17:51:20 by jpedro-b         ###   ########.fr       */
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
	return (i - start);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		k;
	int		wc;
	int		wl;

	if (! s)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	wc = ft_countwords(s, c);
	res = malloc((wc + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < wc)
	{
		while (s[k] == c)
			k++;
		wl = ft_wordlen(s, k, c);
		res[i] = malloc(wl + 1);
		if (!res[i])
			return (NULL);
		j = 0;
		while (j < wl)
		{
			res[i][j] = s[k];
			j++;
			k++;
		}
		res[i][j] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}
