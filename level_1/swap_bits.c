#include <stdlib.h>

unsigned char	reverse(char *str)
{
	int		i;
	int		j;
	int		n;
	char	*str2;

	i = 4;
	j = 0;
	n = 0;
	str2 = malloc(9 * sizeof(char));
	while (str[i] != '\0')
	{
		str2[j] = str[i];
		i++;
		j++;
	}
	i = 0;
	while (i != 4)
	{
		str2[j] = str[i];
		i++;
		j++;
	}
	str2[j] = '\0';
	i = 0;
	j = 128;
	while (str2[i] != '\0')
	{
		if (str2[i] == '1')
			n = n + j;
		j = j / 2;
		i++;
	}
	return (n);
}

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	a;
	unsigned int	c;
	unsigned int	i;
	unsigned int	binary;
	char			*str;

	c = octet;
	i = 0;
	binary = 128;
	str = malloc(9 * sizeof(char));
	while (i < 8)
	{
		if (binary <= c)
		{
			str[i] = '1';
			c = c - binary;
		}
		else
			str[i] = '0';
		binary = binary / 2;
		i++;
	}
	str[i] = '\0';
	return (reverse(str));
}

/* int	main(void)
{
	swap_bits('a');
	return (0);
} */
