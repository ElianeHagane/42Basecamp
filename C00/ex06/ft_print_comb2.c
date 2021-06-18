#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	nd;

	first = 0;
	while (first < 100)
	{	
		nd = first + 1;
		while (nd < 100)
		{
			ft_putchar(first / 10 + '0');
			ft_putchar(first % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nd / 10 + '0');
			ft_putchar(nd % 10 + '0');
			if (first / 10 != 9 || first % 10 != 8)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}	
			nd++;
		}
		first++;
	}
}
