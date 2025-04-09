/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:35:39 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/09 11:30:27 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char s0[] = "Student at 42";
	printf("\nft_bzero:\n");
	printf("Before = %s\n", s0);
	ft_bzero(s0, 4);
	printf("After = %s\n", s0);	

	printf("\nft_isalnum:\n");
	printf("0 = %d\n", ft_isalnum('0'));
	printf("1 = %d\n", ft_isalnum('1'));
	printf("A = %d\n", ft_isalnum('A'));
	printf("z = %d\n", ft_isalnum('z'));
	printf("Z = %d\n", ft_isalnum('Z'));
	printf("/ = %d\n\n", ft_isalnum('/'));

	printf("ft_isdigit:\n");
	printf("48 = %d\n\n", ft_isdigit(48));

	printf("ft_isprint:\n");
	printf("0 = %d\n", ft_isprint(0));
	printf("48 = %d\n", ft_isprint(48));
	printf("127 = %d\n\n", ft_isprint(127));

	printf("ft_strcmp:\n");
	printf("Teste, Testa = %d\n", ft_strcmp("Teste", "Testa"));
	printf("Teste, Teste = %d\n", ft_strcmp("Teste", "Teste"));
	printf("Testa, Teste = %d\n\n", ft_strcmp("Testa", "Teste"));

	printf("ft_isascii:\n");
	printf("A = %d\n", ft_isascii('A'));
	printf("65 = %d\n", ft_isascii(65));
	printf("200 = %d\n\n", ft_isascii(200));

	char s1[] = "ARROZ";
	char s2[] = "MASSA";
	printf("ft_strcpy:\n");
	printf("Before = %s\n", s1);
	printf("After = %s\n\n", ft_strcpy(s1, s2));

	printf("ft_strlen:\n");
	printf("Arroz = %zu\n\n", ft_strlen("Arroz"));

	printf("ft_strncmp:\n");
	printf("Teste, Arroz, 3) = %d\n\n", ft_strncmp("Teste", "Arroz", 3));

	printf("ft_isalpha:\n");
	printf("a = %d\n", ft_isalpha('a'));
	printf("1 = %d\n", ft_isalpha('1'));
	printf("A = %d\n", ft_isalpha('A'));
	printf("z = %d\n", ft_isalpha('z'));
	printf("Z = %d\n\n", ft_isalpha('Z'));

	char s3[] = "Student at 42";
	printf("ft_memset:\n");
	printf("Before = %s\n", s3);
	ft_memset(s3, 'A', 3);
	printf("After = %s\n", s3);
	return (0);
}

