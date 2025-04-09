/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:50:53 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/09 17:59:13 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	long int i;
	
	while(i < n)
	{
		if ((unsigned char *)s[i] == c)
			return (i);
		i++;
	}
	if (c[i] == '\0')
		return (i + 1);
}

