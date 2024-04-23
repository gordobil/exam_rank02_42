#include <unistd.h>

void	ulstr(char **str)
{
	int		i;

	i = 0;
	while (str[1][i] != '\0')
	{
		if (str[1][i] >= 'A' && str[1][i] <= 'Z')
			str[1][i] = str[1][i] + 32;
		else if (str[1][i] >= 'a' && str[1][i] <= 'z')
			str[1][i] = str[1][i] - 32;
		write(1, &str[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ulstr(argv);
	return (0);
}