#include <unistd.h>

unsigned int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	n = str[i] - '0';
	i++;
	while (str[i] != '\0')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	if (n < 0 || n > 2147483647)
		return (0);
	return (n);
}

void	print_hex(unsigned int n)
{
	char	c;

	if (n > 15)
	{
		print_hex(n / 16);
		print_hex(n % 16);
	}
	else if (n < 10)
	{
		c = n + '0';
		write (1, &c, 1);
	}
	else
	{
		c = n - 10 + 'a';
		write (1, &c, 1);
	}
}

int	main(int argc, char **argv)
{
	unsigned int	n;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	n = ft_atoi(argv[1]);
	print_hex(n);
	write (1, "\n", 1);
	return (0);
}