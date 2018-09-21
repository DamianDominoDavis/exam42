#include <stdio.h>

int	ft_atoi(const char *str)
{
	char	*ptr;
	int		out;
	int		sign;

	out = 0;
	sign = 1;
	ptr = (char*)str;
	while (*ptr == ' ' || *ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			sign = -1;
		ptr++;
	}
	while (*ptr != 0 && *ptr >= '0' && *ptr <= '9')
	{	
		out = out * 10 + (int)(*ptr - '0');
		ptr++;
	}
	return (sign * out);
}
