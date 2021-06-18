char	*ft_strcapitalize(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{	
		if (count == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			count++;
		}	
		else if (count > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			count = 0;
		else
			count++;
		i++;
	}
	return (str);
}
