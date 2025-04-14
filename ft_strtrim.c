/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:10:46 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/14 12:16:14 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_contains(char *set, char c)
{
	int	i;

	i = 0;
	while(set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	s;
	int	e;
	char	*tmp;

	if (!s1	|| !set)
		return (NULL);
	i = 0;
	s = 0;
	while (s1[i])
	{
		if(ft_contains((char *)set, s1[i]))
			s++;
		else
			break ;
		i++;
	}
	i = ft_strlen(s1);
	e = 0;
	while (i > 0)
	{		
		if(ft_contains((char *)set, s1[i - 1]))
			e++;
		else
			break ;
		i--;
	}
	tmp = malloc(ft_strlen(s1) - s - e + 1);
	if (tmp == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < (int)ft_strlen(s1) - s - e)
		{
			tmp[i] = s1[i + s];
			i++;
		}
		tmp[i] = '\0';
		return (tmp);
	}
}
