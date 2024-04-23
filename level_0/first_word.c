#include <unistd.h>

void	first_word(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
			i++;
		else
		{
			while (str[i] != ' ' && str[i] != '	' && str[i] != '\n' && str[i] != '\0')
			{
				write(1, &str[i], 1);
				i++;
			}
			break ;
		}
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
	first_word(argv[1]);
	return (0);
}
