/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:06:43 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/10 12:29:06 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	i;
	int	z;

	i = 0;
	if (ft_strlen(little) <= 0)
		return ((char *)big);
	while (big[i])
	{
		if (big[i] == little[0])
		{
			z = 0;
			printf("FIRST FOUNDED\n");
			while (big[i] == little[z])
			{
				if (little[z + 1] == '\0')
					return ((char *)big + (i - z));
				z++;
				i++;
			}
		}
		i++;
	}
	return (NULL);
}
