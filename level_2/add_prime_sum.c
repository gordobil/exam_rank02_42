#include <unistd.h>

void add_prime_sum(unsigned int n)
{
	char c;
	int	sum;
	int	count;
	int	div;

	sum = 0;
	count = 0;
	while (n > 1)
	{
		div = n;
		while (div > 1)
		{
			if (n % div == 0)
				count++;
			div--;
		}
		if (count == 1)
			sum = sum + n;
		count = 0;
		n--;
	}
	if (sum / 10 != 0)
	{
		n = sum;
		count = 1;
		while (n / 10 != 0)
		{
			count = count * 10;
			n = n / 10;
		}
		while (count > 0)
		{
			c = (sum / count) + '0';
			write (1, &c, 1);
			sum = sum % count;
			count = count / 10;
		}
		write (1, "\n", 1);
	}
	else
	{
		c = sum + '0';
		write (1, &c, 1);
		write (1, "\n", 1);
	}
}

unsigned int	ft_atoi(char *argv1)
{
	unsigned int	n;
	int				i;

	n = 0;
	i = 0;
	while (argv1[i] != '\0')
	{
		n = (n * 10) + (argv1[i] - '0');
		i++;
	}
	return (n);
}

int	main(int argc, char **argv)
{
	unsigned int	n;
	int				i;

	i = 0;
	if (argc != 2 || argv[1][i] == '-')
	{
		write(1, "0\n", 2);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] < '0' && argv[1][i] > '9' || i > 9)
			return (0);
		i++;
	}
	n = ft_atoi(argv[1]);
	add_prime_sum(n);
	return (0);
}