#include <stdlib.h>
#include <stdio.h>

int	word_count(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
			i++;
		if (str[i] != ' ' && str[i] != '	' && str[i] != '\n' && str[i] != '\0')
			j++;
		while (str[i] != ' ' && str[i] != '	' && str[i] != '\n' && str[i] != '\0')
			i++;
	}
	return (j);
}

char	*word_by_word(char *str, int i)
{
	char	*word;
	int		j;
	int		k;

	j = i;
	while (str[j] != ' ' && str[j] != '	' && str[j] != '\n' && str[j] != '\0')
		j++;
	word = malloc((j - i + 1) * sizeof(char));
	k = 0;
	while (i < j)
	{
		word[k] = str[i];
		i++;
		k++;
	}
	word[k] = '\0';
	return (word);
}

char    **ft_split(char *str)
{
	char	**matrix;
	int		i;
	int		j;
	int		n;

	if (!str)
		return (0);
	i = word_count(str);
	matrix = malloc((i + 1) * sizeof(char *));
	n = i;
	matrix[n] = NULL;
	i = 0;
	j = 0;
	while (str[i] != '\0' && j < n)
	{
		while (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
			i++;
		matrix[j] = word_by_word(str, i);
		while (str[i] != ' ' && str[i] != '	' && str[i] != '\n' && str[i] != '\0')
			i++;
		j++;
	}
	return (matrix);
}

/* int	main(void)
{
	char	*str = "   hola que  tal?    ";
	char	**m;
	int	i;

	i = 0;
	ft_split(str);
	m = ft_split(str);
	while (*m)
	{
		printf("%s\n", m[i]);
		m++;
	}
	return (0);
} */