/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 21:06:02 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/02 21:21:15 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while(str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
			return(str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_strcmp("Teste", "Teste"));
}
