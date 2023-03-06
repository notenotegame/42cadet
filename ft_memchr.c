void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (*str == c)
			return (str);
		str++;
		i++;
	}
	return (0);
}
