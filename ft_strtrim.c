/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:10:46 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/10 18:20:58 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_contains(char *str, char c, int start)
{
	int	i;
	
	i = start;
	while(str[i])
	{
		if (str[i] == c)
			return (1);
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (s1[i])
	{
		if(ft_contains((char *)set, s1[i], i))
			c++;
		else
			break ;
		i++;
	}
	printf("\n%d\n", c);
	return ((char *)s1);
}
