#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_atoi(char *str)
{
	unsigned int	number;
	int				i;

	number = 0;
	i = 0;
	while (str[i] != '\0')
	{
		number += str[i] - '0';
		if (str[i + 1] != '\0')
			number *= 10;
		i++;
	}
	return (number);
}

void	ft_itoa(unsigned int num)
{
	int				i;
	unsigned int	ten;
	unsigned int	n;
	char			*str;

	i = 0;
	ten = 1;
	n = num;
	while (n > 0)
	{
		n = n / 10;
		ten *= 10;
		i++;
	}
	str = malloc((i + 2) * sizeof(char));
	str[i + 1] = '\0';
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = (num / ten) + '0';
		write(1, &str[i], 1);
		num = num % ten;
		ten = ten / 10;
		i++;
	}
}

void	tab_mult(unsigned int number)
{
	unsigned int	mult;
	unsigned int	res;
	unsigned char	c;

	mult = 1;
	res = 0;
	c = 'a';
	while (mult <= 9)
	{
		c = mult + '0';
		write(1, &c, 1);
		write(1, " x ", 3);
		ft_itoa(number);
		write(1, " = ", 3);
		res = mult * number;
		ft_itoa(res);
		write(1, "\n", 1);
		mult++;
	}
}

int	main(int argc, char **argv)
{
	int				i;
	unsigned int	number;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] < '0' && argv[1][i] > '9')
		{
			write (1, "\n", 1);
			return (0);
		}
		i++;
	}
	number = ft_atoi(argv[1]);
	tab_mult(number);
	return (0);
}