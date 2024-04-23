#include <unistd.h>

void	fizzbuzz(void)
{
	unsigned int	counter;
	char			num;


	counter = 1;
	num = '0';
	while (counter <= 100)
	{
		if ((counter % 3 == 0) && (counter % 5 == 0))
			write (1, "fizzbuzz", 8);
		else if (counter % 3 == 0)
			write (1, "fizz", 4);
		else if (counter % 5 == 0)
			write (1, "buzz", 4);
		else
		{
			if (counter < 10)
			{
				num = counter + '0';
				write (1, &num, 1);
			}
			else
			{
				num = (counter / 10) + '0';
				write (1, &num, 1);
				num = (counter % 10) + '0';
				write (1, &num, 1);
			}
		}
		write (1, "\n", 1);
		counter++;
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}