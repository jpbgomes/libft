/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 21:22:06 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/02 21:23:08 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *str1, char *str2, int c)
{
	int	i;

	i = 0;
	while((str1[i] || str2[i]) && i < c)
	{
		if (str1[i] != str2[i])
			return(str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_strncmp("Teste", "Testa", 4));
}
