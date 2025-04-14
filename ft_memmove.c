/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:58:49 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/14 17:09:39 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptrd;
	const unsigned char	*ptrs;

	ptrd = (unsigned char *)dest;
	ptrs = (const unsigned char *)src;
	i = 0;
	if (ptrs < ptrd)
	{
		i = n;
		while (i > 0)
		{
			i--;
			ptrd[i] = ptrs[i];
		}
	}
	else
	{
		while (i < n)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	return (dest);
}
