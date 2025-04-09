/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:58:49 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/09 12:12:47 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *ptrD;
	const unsigned char *ptrS;

	ptrD = (unsigned char *)dest;
	ptrS = (const unsigned char *)src;
	
	i = 0;
	while (i < n)
	{
		ptrD[i] = ptrS[i];
		i++;
	}
	return (dest);
}
