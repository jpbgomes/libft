/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:49:47 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/14 17:09:26 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = malloc(nmemb * size);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		tmp[i] = 0;
		i++;
	}
	return ((void *)tmp);
}
