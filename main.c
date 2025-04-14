/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-b <jpedro-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:35:39 by jpedro-b          #+#    #+#             */
/*   Updated: 2025/04/14 17:50:05 by jpedro-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	printf("\nft_atoi:\n");
	printf(" -12345a68 = %d\n", ft_atoi(" -12345a68"));
	printf("--12345a68 = %d\n", ft_atoi("--12345a68"));
	printf("-12345a68 = %d\n", ft_atoi("-12345a68"));
	printf("+12345a68 = %d\n", ft_atoi("+12345a68"));

	char s0[] = "Student at 42";
	printf("\nft_bzero:\n");
	printf("Before = %s\n", s0);
	ft_bzero(s0, 4);
	printf("After = %s\n", s0);	

	printf("\nft_calloc:\n");
	int *callocResult = (int *)ft_calloc(5, sizeof(int));
   	if (callocResult == NULL) {
        printf("Calloc Memory allocation failed\n\n");
    } else {
		for (int i = 0; i < 5; i++) {
			printf("Calloc Result = %d\n", callocResult[i]);
		}
		free(callocResult);
		printf("\n\n");
	}

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

	char sMChr[] = "Student at 42";
	printf("ft_memchr:\n");
	printf("Used String = %s\n", sMChr);
	printf("Result = %s\n\n", (char *)ft_memchr(sMChr, 'u', 4));

	char sMCmp[] = "Student at 42";
	char sMCmp2[] = "Arroz de Massa";
	printf("ft_memcmp:\n");
	printf("Used String = %s\nBefore = %s\n", sMCmp2, sMCmp);
	printf("Result = %d\n\n", ft_memcmp(sMCmp, sMCmp2, 4));

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

	char sSet[] = "Student at 42";
	printf("ft_memset:\n");
	printf("Used Char = %c\nBefore = %s\n", 'A', sSet);
	ft_memset(sSet, 'A', 3);
	printf("After = %s\n\n", sSet);

	printf("\nft_split:\n");
	char sSplit[] = "I'm a Student at 42";
	char **splitResult = ft_split(sSplit, ' ');
   	if (splitResult == NULL) {
        printf("Split Memory allocation failed\n\n");
    } else {
		int i = 0;
		while (splitResult[i])
		{
			printf("Split [%d] = %s\n", i, splitResult[i]);
			free(splitResult[i]);
			i++;
		}
		free(splitResult);
	}

	char sStrchr[] = "I'm a Student at 42";
	printf("ft_strchr:\n");
	printf("Used String = %s\n", sStrchr);
	printf("Result = %s\n\n", ft_strchr(sStrchr, 'a'));

	printf("\nft_strdup:\n");
	char sStrdup[] = "I'm a Student at 42";
	char *strdupResult = ft_strdup(sStrdup);
   	if (strdupResult == NULL) {
        printf("Strdup Memory allocation failed\n\n");
    } else {
		printf("Strdup Result = %s\n", strdupResult);
		free(strdupResult);
		printf("\n\n");
	}

	printf("\nft_strjoin:\n");
	char sStrjoin[] = "I'm a ";
	char sStrjoin2[] = "Student at 42";
	char *strjoinResult = ft_strjoin(sStrjoin, sStrjoin2);
   	if (strjoinResult == NULL) {
        printf("StrJoin Memory allocation failed\n\n");
    } else {
		printf("StrJoin Result = %s\n", strjoinResult);
		free(strjoinResult);
		printf("\n\n");
	}

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

	char sStrrchr[] = "I'm a Student at 42";
	printf("ft_strrchr:\n");
	printf("Used String = %s\n", sStrrchr);
	printf("Result = %s\n\n", ft_strrchr(sStrrchr, 'a'));

	char sStrstr[] = "Student at 42";
	char sStrstr2[] = "";
	char sStrstr3[] = "at";
	char sStrstr4[] = "42 School";
	printf("ft_strstr:\n");
	printf("Used String = %s\nBefore = %s\n", sStrstr2, sStrstr);
	printf("Result = %s\n\n", ft_strstr(sStrstr, sStrstr2));
	printf("Used String = %s\nBefore = %s\n", sStrstr3, sStrstr);
	printf("Result = %s\n\n", ft_strstr(sStrstr, sStrstr3));
	printf("Used String = %s\nBefore = %s\n", sStrstr4, sStrstr);
	printf("Result = %s\n\n", ft_strstr(sStrstr, sStrstr4));

	char sStrtrim[] = "...I'm a Student. At 42...";
	// char sStrtrim[] = "...I'm a Student. At 42.";
	// char sStrtrim[] = "......";
	printf("ft_strtrim:\n");
	printf("Used String = %s\n", sStrtrim);
	char *trimResult = (char *)ft_strtrim(sStrtrim, ".");
   	if (trimResult == NULL) {
        printf("StrTrim Memory allocation failed\n\n");
    } else {
		printf("StrTrim Result = %s\n", trimResult);
		free(trimResult);
		printf("\n\n");
	}

	printf("\nft_substr:\n");
	char sSubstr[] = "I'm a Student at 42";
	char *substrResult = ft_substr(sSubstr, 6, 7);
   	if (substrResult == NULL) {
        printf("Substr Memory allocation failed\n\n");
    } else {
		printf("Substr Result = %s\n", substrResult);
		free(substrResult);
		printf("\n\n");
	}

	printf("ft_tolower:\n");
	printf("a = %c\n", ft_tolower('a'));
	printf("Z = %c\n", ft_tolower('Z'));
	printf("- = %c\n\n", ft_tolower('-'));

	printf("ft_toupper:\n");
	printf("a = %c\n", ft_toupper('a'));
	printf("Z = %c\n", ft_toupper('Z'));
	printf("- = %c\n\n", ft_toupper('-'));

	return (0);
}

