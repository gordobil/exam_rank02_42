#include <unistd.h>

void	expand_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
			i++;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '	' && str[i] != '\n' && str[i] != '\0')
		{
			write (1, &str[i], 1);
			i++;
		}
		while (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
			i++;
		if (str[i] != '\0' && str[i + 1] != '\0')
			write (1, "   ", 3);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	expand_str(argv[1]);
	write (1, "\n", 1);
	return (0);
}