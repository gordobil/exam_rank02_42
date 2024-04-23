#include <unistd.h>

void	epur_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
		{
			if (str[i + 1] == ' ' || str[i + 1] == '	' || str[i + 1] == '\n' || str[i + 1] == '\0')
				i++;
			else
			{
				write (1, &str[i], 1);
				i++;
			}
		}
		else
		{
			write (1, &str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	epur_str(argv[1]);
	return (0);
}