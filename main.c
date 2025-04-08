/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:35:39 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/08 19:54:19 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	printf("ft_isdigit:\n%d\n\n", ft_isdigit(48));
	printf("ft_strcmp:\n%d\n\n", ft_strcmp("Teste", "Testa"));

	char s1[] = "ARROZ";
	char s2[] = "MASSA";
    printf("ft_strcpy:\n%s\n\n", ft_strcpy(s1, s2));

	printf("ft_strlen:\n%d\n\n", ft_strlen("Arroz"));
    printf("ft_strncmp:\n%d\n\n", ft_strncmp("Teste", "Arroz", 3));

	printf("ft_isalpha:\n%d\n\n", ft_isalpha(65));
	return (0);
}
