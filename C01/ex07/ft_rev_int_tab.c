void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count_rev;

	count_rev = 0;
	while (count_rev < size)
	{
		temp = tab [count_rev];
		tab [count_rev] = tab [size - 1];
		tab [size - 1] = temp;
		count_rev++;
		size--;
	}
}
