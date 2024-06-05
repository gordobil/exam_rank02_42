#include <unistd.h>

void	rev_wstr(char *str)
{
	int	i;
	int	j;

	while (str[i] != '\0')
		i++;
	j = --i;
	while (i >= 0)
	{
		while (str[i] != ' ' && i >= 0)
			i--;
		j = i;
		i++;
		while (str[i] != ' ' && str[i] != '\0')
		{
			write (1, &str[i], 1);
			i++;
		}
		if (j > 0)
			write (1, " ", 1);
		i = --j;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	rev_wstr(argv[1]);
	write (1, "\n", 1);
	return (0);
}