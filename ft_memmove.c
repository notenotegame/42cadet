void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	size_t		i;

	ptr = (unsigned char *)dest;
	i = 0;
	if (ptr > (unsigned char *)src)
	{
		while(n-- > 0)
			ptr[n] = ((unsigned char *)src)[n];
	}
	else
	{
		while(i < n)
			ptr[i++] = ((unsigned char *)src)[i++];
	}
	return (dest);
}
