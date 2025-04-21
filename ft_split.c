/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:25:23 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/21 17:36:31 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	wc;
	int	going;

	i = 0;
	wc = 0;
	going = 1;
	while (s[i])
	{
		if (s[i] != c && going)
			wc++;
		going = 0;
		if (s[i] == c)
			going = 1;
		i++;
	}
	return (wc);
}

static int	ft_wordlen(char const *s, int start, char c)
{
	int	i;

	i = start;
	while (s[i] && s[i] != c)
		i++;
	return (i - start);
}

static char	**free_data(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		k;
	int		wl;

	if (! s)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	res = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < ft_countwords(s, c))
	{
		while (s[k] == c)
			k++;
		wl = ft_wordlen(s, k, c);
		if (wl == 0)
			break ;
		res[i] = malloc(wl + 1);
		if (!res[i])
			return (free_data(res));
		j = 0;
		while (j < wl)
			res[i][j++] = s[k++];
		res[i][j] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}
