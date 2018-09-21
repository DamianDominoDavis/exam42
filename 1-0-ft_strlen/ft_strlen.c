int	ft_strlen(char *str)
{
	char *ptr;

	if (str)
	{
		ptr = str;
		while (*ptr)
			ptr++;
		return (ptr - str - 1);
	}
	else
		return (0);
}
