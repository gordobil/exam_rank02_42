#include <stdio.h>
#include <stdlib.h>

unsigned int	divisor(unsigned int n1, unsigned int n2)
{
	unsigned int	div;

	if (n1 < n2)
		div = n2;
	else
		div = n1;
	return (div);
}

void	pgcd(int argc, char **argv)
{
	unsigned int	n1;
	unsigned int	n2;
	unsigned int	i;

	if (argc != 3)
	{
		printf("\n");
		return ;
	}
	i = 0;
	while (argv[1][i] != '\0' && argv[1][i] != '\0'
	&& argv[2][i] != '\0' && argv[2][i] != '\0')
	{
		if (argv[1][i] < '0' || argv[1][i] > '9'
		|| argv[2][i] < '0' || argv[2][i] > '9')
			return ;
		i++;
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	i = divisor(n1, n2);
	while (n1 % i != 0 || n2 % i != 0)
		i--;
	printf("%d\n", i);
}

int	main(int argc, char **argv)
{
	pgcd(argc, argv);
	return (0);
}