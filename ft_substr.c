/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:55:33 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/14 17:09:52 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	sl;
	char			*tmp;

	i = start;
	sl = ft_strlen(s);
	if (start > sl)
		return (ft_strdup(""));
	tmp = malloc(len + 1);
	if (tmp == NULL)
		return (NULL);
	while (s[i] && (i - start) < len)
	{
		tmp[i - start] = s[i];
		i++;
	}
	tmp[i - start] = '\0';
	return (tmp);
}
