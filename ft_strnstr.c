#include "ft_strlen.c"
#include "ft_strncmp.c"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	k;
	char	*s1;

	s1 = (char *)little;
	k = ft_strlen(s1);
	if (*little == 0 || big == little)
		return ((char *)big);
	while (*big && k <= len--)
	{
		if (!(ft_strncmp(big, little, k)))
			return ((char *)big);
		big++;
	}
	return (0);
}
