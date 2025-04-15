#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int i, char c))
{
	size_t		x;
	size_t		len;
	char		*res;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	x = 0;
	while (x < len)
	{
		res[x] = f(x, s[x]);
		x++;
	}
	res[x] = '\0';
	return (res);
}
