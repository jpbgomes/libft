#include "libft.h"

int	ft_countdigits(int n)
{
	int	i;
	int	x;

	i = 1;
	x = n;
	if (n < 0)
	{
		x = x * -1;
		i += 1;
	}
	while (x >= 10)
	{
		x = x / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int	i;
	int	x;
	int	sign;
	int	digits;
	char	*res;

	i = 0;
	sign = 1;
	digits = ft_countdigits(n);
	res = malloc(digits * sizeof(char));
	if (! res)
		return (NULL);
	x = n;
	if (n < 0)
	{
		x *= -1;
		sign *= -1;
	}
	while (i < digits)
	{
		printf("%d - %d\n", digits - i, x % 10);
		if (digits - i == 1 && sign == -1)
			res[digits - i - 1] = '-';
		else
			res[digits - i - 1] = x % 10 + 48;
		i++;
		x = x / 10;
	}
	res[digits] = '\0';

	printf("Res = %s\n", res);
	printf("Digits = %d\nSign = %d\n", digits, sign);

	return (res);	
}	
