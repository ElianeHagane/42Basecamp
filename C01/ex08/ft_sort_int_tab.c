void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	final;
	int	temp;

	i = 0;
	final = 0;
	while (final <= size)
	{	
		i = 0;
		while (i <= size)
		{
			if (tab [i] > tab [final])
			{
				temp = tab [final];
				tab [final] = tab [i];
				tab [i] = temp;
			}
			i++;
		}
		final++;
	}
}
