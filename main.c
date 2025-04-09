/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:35:39 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/09 15:47:20 by jpedro-b         ###   ########.fr       */
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

	printf("ft_isalpha:\n");
	printf("a = %d\n", ft_isalpha('a'));
	printf("1 = %d\n", ft_isalpha('1'));
	printf("A = %d\n", ft_isalpha('A'));
	printf("z = %d\n", ft_isalpha('z'));
	printf("Z = %d\n\n", ft_isalpha('Z'));

	printf("ft_isascii:\n");
	printf("A = %d\n", ft_isascii('A'));
	printf("65 = %d\n", ft_isascii(65));
	printf("200 = %d\n\n", ft_isascii(200));

	printf("ft_isdigit:\n");
	printf("48 = %d\n\n", ft_isdigit(48));

	printf("ft_isprint:\n");
	printf("0 = %d\n", ft_isprint(0));
	printf("48 = %d\n", ft_isprint(48));
	printf("127 = %d\n\n", ft_isprint(127));


	char sSet[] = "Student at 42";
	printf("ft_memset:\n");
	printf("Used Char = %cBefore = %s\n", 'A', sSet);
	ft_memset(sSet, 'A', 3);
	printf("After = %s\n\n", sSet);

	char sMCpy[] = "Student at 42";
	char sMCpy2[] = "Arroz de Massa";
	printf("ft_memcpy:\n");
	printf("Used String = %s\nBefore = %s\n", sMCpy2, sMCpy);
	ft_memcpy(sMCpy, sMCpy2, 4);
	printf("After = %s\n\n", sMCpy);

	char sMv[] = "Student at 42";
	char sMv2[] = "Arroz de Massa";
	printf("ft_memmove:\n");
	printf("Used String = %s\nBefore = %s\n", sMv2, sMv);
	ft_memmove(sMv, sMv2, 4);
	printf("After = %s\n\n", sMv);

	char sSCat[] = "ARROZ";
	char sSCat2[] = "MASSA";
	printf("ft_strlcat:\n");
	printf("Before = %s\n", sSCat);
	printf("After = %ld\n\n", ft_strlcat(sSCat, sSCat2, 11));

	char sSCpy[] = "ARROZ";
	char sSCpy2[] = "MASSA";
	printf("ft_strlcpy:\n");
	printf("Before = %s\n", sSCpy);
	printf("After = %ld\n\n", ft_strlcpy(sSCpy, sSCpy2, 4));

	printf("ft_strlen:\n");
	printf("Arroz = %zu\n\n", ft_strlen("Arroz"));

	printf("ft_strncmp:\n");
	printf("Teste, Arroz, 3) = %d\n\n", ft_strncmp("Teste", "Arroz", 3));

	return (0);
}

