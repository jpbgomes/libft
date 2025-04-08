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

	printf("ft_isalnum:\n%d\n\n", ft_isalnum('0'));
	printf("ft_isalnum:\n%d\n\n", ft_isalnum('1'));
	printf("ft_isalnum:\n%d\n\n", ft_isalnum('A'));
	printf("ft_isalnum:\n%d\n\n", ft_isalnum('z'));
	printf("ft_isalnum:\n%d\n\n", ft_isalnum('Z'));
	printf("ft_isalnum:\n%d\n\n", ft_isalnum('/'));

	printf("ft_isdigit:\n%d\n\n", ft_isdigit(48));
	printf("ft_strcmp:\n%d\n\n", ft_strcmp("Teste", "Testa"));
	printf("ft_strcmp:\n%d\n\n", ft_strcmp("Teste", "Teste"));
	printf("ft_strcmp:\n%d\n\n", ft_strcmp("Testa", "Teste"));

	printf("ft_isascii:\n%d\n\n", ft_isascii('A'));
	printf("ft_isascii:\n%d\n\n", ft_isascii(65));
	printf("ft_isascii:\n%d\n\n", ft_isascii(200));


	char s1[] = "ARROZ";
	char s2[] = "MASSA";
    printf("ft_strcpy:\nBefore = %s", s1);
	printf("\nAfter = %s\n\n", ft_strcpy(s1, s2));


	printf("ft_strlen:\n%d\n\n", ft_strlen("Arroz"));
    printf("ft_strncmp:\n%d\n\n", ft_strncmp("Teste", "Arroz", 3));

	printf("ft_isalpha:\n%d\n\n", ft_isalpha('a'));
	printf("ft_isalpha:\n%d\n\n", ft_isalpha('1'));
	printf("ft_isalpha:\n%d\n\n", ft_isalpha('A'));
	printf("ft_isalpha:\n%d\n\n", ft_isalpha('z'));
	printf("ft_isalpha:\n%d\n\n", ft_isalpha('Z'));
	return (0);
}
