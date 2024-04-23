#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int		i;
	char	*dest;

	if (!src)
		return (0);
	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc((i + 1) * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	*str = "hola";

	printf("%s", ft_strdup(str));
	return (0);
} */