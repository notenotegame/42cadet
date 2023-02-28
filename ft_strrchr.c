char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	s = s + len - 1;
	while (*s != c && *s != '\0')
		s--;
	if (*s == c)
		return ((char *)s);
	return ((char *)0);
}
