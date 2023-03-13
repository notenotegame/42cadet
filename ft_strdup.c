#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	n;

	n = ft_strlen(str);
	s = malloc(sizeof(char) * (n + 1));
	ft_memcpy(s, str, n);
	return (s);
}
