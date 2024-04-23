//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* int	main(void)
{
	char	*s1 = "hola";
	char	*s2 = "ho";

	printf("%d", ft_strcmp(s1,s2));
	return (0);
} */