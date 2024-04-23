#include <unistd.h>
#include <stdio.h>

void	repeat_alpha(char letter)
{
	int	rep;

	if (letter >= 'a' && letter <= 'z')
		rep = (letter - 'a') + 1;
	else if (letter >= 'A' && letter <= 'Z')
		rep = (letter - 'A') + 1;
	else
		rep = 1;
	while (rep > 0)
	{
		write (1, &letter, 1);
		rep--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		repeat_alpha(argv[1][i]);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}