void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

/* int	main(void)
{
	int	a = 12;
	int	b = 3;

	ft_swap(&a, &b);
	return (0);
} */