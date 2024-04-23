#include <unistd.h>

void	search_and_replace(char *str, char find, char replace)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == find)
			write (1, &replace, 1);
		else
			write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 4 || !argv[1] || !argv[2][0] || !argv[3][0] || argv[2][1] || argv[3][1])
	{
		write (1, "\n", 1);
		return (0);
	}
	search_and_replace(argv[1], argv[2][0], argv[3][0]);
	return (0);
}