/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:50:53 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/10 12:30:51 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	cc;

	cc = (unsigned char) c;
	ptr = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == cc)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
