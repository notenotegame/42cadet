int	ft_atoi(const char *str)
{
	int	sign;
	int	sum;

	sign = 1;
	sum = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
		sign = sign * -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		sum = sum * 10 + (*str - '0');
		str++;
	}
	return (sum * sign);
	
}

