char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	j;
	char	*ret;

	i = 0;
	j = 0;
	ret = (char *)s;
	while (s[i] != c)
		i++;
	while (s[i] != '\0')
	{
		ret[j] = s[i];
		j++;
		i++;
	}
	ret[j] = '\0';
	return (ret);
}

