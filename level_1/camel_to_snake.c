#include <unistd.h>
#include <stdio.h>

void	camel_to_snake(char *str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	if (str[i] < 'a' || str[i] > 'z')
		return ;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write (1, "_", 1);
			str[i] = str[i] + 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	camel_to_snake(argv[1]);
	write (1, "\n", 1);
	return (0);
}