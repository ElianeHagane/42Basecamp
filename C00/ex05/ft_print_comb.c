#include<unistd.h>

void	print_result(char centena, char dezena, char unidade)
{
	write (1, &centena, 1);
	write (1, &dezena, 1);
	write (1, &unidade, 1);
	if (centena != '7')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	centena;
	char	dezena;
	char	unidade;

	centena = '0';
	while (centena <= '7')
	{
		dezena = centena + 1;
		while (dezena <= '8')
		{
			unidade = dezena + 1;
			while (unidade <= '9')
			{
				if ((centena < dezena) && (dezena < unidade))
					print_result(centena, dezena, unidade);
				unidade++;
			}
			dezena++;
		}
		centena++;
	}
}
