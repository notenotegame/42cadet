#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	n;
	size_t	i;

	n = 0;
	i = 0;
	while (str[n])
		n++;
	s = (char *)malloc(sizeof(char) * (n + 1));
	if (s == NULL)
		return (0);
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
