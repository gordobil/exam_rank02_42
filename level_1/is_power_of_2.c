int	    is_power_of_2(unsigned int n)
{
	int	div;

	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	div = n % 2;
	if (div == 0)
		return (1);
	return (0);
}

/* int main(void)
{
	is_power_of_2(4);
	return (0);
} */