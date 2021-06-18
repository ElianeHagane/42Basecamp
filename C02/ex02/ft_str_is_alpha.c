int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((65 <= *str && 90 >= *str) || (97 <= *str && 122 >= *str)))
			return (0);
		str++;
	}
	return (1);
}
