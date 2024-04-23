#include <unistd.h>

int	char_check(char	*s1, char c, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (s1[j] == s1[i])
			return (1);
		j++;
	}
	return (0);
}

void	inter(char	*s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		if (char_check(s1, s1[i], i) == 0)
		{
			j = 0;
			while (s2[j] != '\0')
			{
				if (s2[j] == s1[i])
				{
					write(1, &s1[i], 1);
					break ;
				}
				j++;
			}
		}
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	inter(argv[1], argv[2]);
	return (0);
}