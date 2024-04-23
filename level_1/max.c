int		max(int *tab, unsigned int len)
{
	int	max_n;
	int	i;

	if (len == 0 || !tab)
		return (0);
	i = 0;
	max_n = tab[i];
	while (i < len)
	{
		if (tab[i] > max_n)
			max_n = tab[i];
		i++;
	}
	return (max_n);
}

/* int	main(void)
{
	int	n[] = {2, 3, 4, 7, 3};

	return (0);
} */