/* #include <stdio.h>
#include <stdlib.h> */

int	ft_atoi(const char *str)
{
	int	n;
	int	i;

	if (!str)
		return (0);
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			i++;
		else
			return (0);
	}
	else if (str[i] < '0' || str[i] > '9')
		return (0);
	n = str[i] - '0';
	i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			break ;
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	if (str[0] == '-')
		n = n * -1;
	return (n);
}

/* int	main(void)
{
	char	*str = "-6hola";

	printf("atoi:    %d\nft_atoi: %d\n", atoi(str), ft_atoi(str));
	return (0);
} */
