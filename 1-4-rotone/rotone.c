#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int c, char **v)
{
	char	*ptr;

	if (c == 2)
	{
		ptr = v[1];
		while (*ptr)
		{
			if (*ptr >= 'a' && *ptr <= 'z')
				(*ptr == 'z') ? ft_putchar('a') : ft_putchar(*ptr + 1);
			else if (*ptr >= 'A' && *ptr <= 'Z')
				(*ptr == 'Z') ? ft_putchar('A') : ft_putchar(*ptr + 1);
			else
				ft_putchar(*ptr);
			ptr++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
