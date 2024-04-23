#include <stdio.h>
#include <stdlib.h>

void	do_op(int x, int y, char sign)
{
	int	res;

	res = 0;
	if (sign == '+')
		res = x + y;
	else if (sign == '-')
		res = x - y;
	else if (sign == '*')
		res = x * y;
	else if (sign == '/')
		res = x / y;
	else if (sign == '%')
		res = x % y;
	else
	{
		printf("\n");
		return ;
	}
	printf("%d\n", res);
}

int	main(int argc, char **argv)
{
	int		x;
	int		y;

	if (argc != 4 || argv[2][1])
	{
		printf("\n");
		return (0);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	do_op(x, y, argv[2][0]);
	return (0);
}