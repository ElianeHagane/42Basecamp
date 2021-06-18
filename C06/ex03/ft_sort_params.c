#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_strswap(char **s1, char **s2);
void	ft_print_params(int argc, char **argv);

int	main(int argc, char **argv)
{
	int				i;
	unsigned int	iteration_nbr;

	if (argc > 1)
	{
		iteration_nbr = argc - 1;
		while (iteration_nbr--)
		{
			i = 1;
			while (i < (argc - 1))
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				{
					ft_strswap(&argv[i], &argv[i + 1]);
				}
				i++;
			}
		}
	}
	ft_print_params(argc, argv);
	return (0);
}

void	ft_putstr(char *str)
{
	int	char_nbrs;

	char_nbrs = 0;
	while (str[char_nbrs] != '\0')
		char_nbrs++;
	write(1, str, char_nbrs);
}

void	ft_print_params(int argc, char **argv)
{
	int		i;
	char	*param;

	if (argc > 1)
	{
		i = 1;
		while (i++ < argc)
		{
			argv++;
			param = *argv;
			ft_putstr(param);
			write(1, "\n", 1);
		}
	}
}

void	ft_strswap(char **s1, char **s2)
{
	char	*buffer;

	buffer = *s1;
	*s1 = *s2;
	*s2 = buffer;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
