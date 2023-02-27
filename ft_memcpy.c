void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *ptr;
	unsigned int	i;

	i = 0;
	ptr = (unsigned char *)dest;
	while (i < n)
		ptr[i++] = *((unsigned char *)src++);
	return (dest);
}
