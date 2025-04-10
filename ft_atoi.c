/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:41:20 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/10 12:56:26 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i])
	{
		if (nptr[i] == '+' || nptr[i] == '-')
			if (nptr[i] == '-')
				sign = sign * -1;
		if (nptr[i + 1] && nptr[i + 1] >= '0' && nptr[i + 1] <= '9')
		{
			result = (result * 10) + (nptr[i + 1] - 48);
		}
		else
			break ;
		i++;
	}
	return (result * sign);
}
