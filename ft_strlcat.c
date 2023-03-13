#include "libft.h"
#include "ft_strlen.c"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	res;
	size_t	i;
	size_t	n;
	char *s;

	res = 0;
	i = 0;
	n = ft_strlen(dest);
	s = (char *)src;
	if (size <= n)
		res = ft_strlen(s) + size;
	while (s[i] && (n + 1) < size)
	{
		dest[n] = s[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (n + ft_strlen(&s[i]));
}
