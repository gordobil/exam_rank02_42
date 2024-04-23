int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	j;
	int	sign;
	int	power;
	int	mult;
	int	temp;
	int	n;

	if (!str || !str_base || str_base > 16 || str_base < 1)
		return (0);
	i = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	j = i;
	while (str[j] != '\0')
	{
		if (str_base >= 1 && str_base <= 10)
		{
			if (str[j] < '0' || str[j] > '0' + str_base - 1)
				break ;
		}
		else if (str_base >= 11 && str_base <= 16)
		{
			if ((str[j] < '0' || str[j] > '9') && (str[j] < 'a' || str[j] > 'a' + str_base - 11)
				&& (str[j] < 'A' || str[j] > 'A' + str_base - 11))
				break ;
		}
		else
			break ;
		j++;
	}
	j--;
	power = 0;
	mult = 0;
	temp = 0;
	n = 0;
	while (j >= i)
	{
		temp = power;
		if (power == 0)
			mult = 1;
		else if (power == 1)
			mult = str_base;
		else
		{
			mult = str_base;
			temp--;
			while (temp > 0)
			{
				mult *= str_base;
				temp--;
			}
		}
		power++;
		if (str[j] >= 'a' && str[j] <= 'z')
			n += mult * ((str[j] - 'a') + 10);
		else if (str[j] >= 'A' && str[j] <= 'Z')
			n += mult * ((str[j] - 'A') + 10);
		else
			n += mult * (str[j] - '0');
		j--;
	}
	n *= sign;
	return (n);
}
/* 
int	main(void)
{
	ft_atoi_base("345", 15);
	return (0);
} */