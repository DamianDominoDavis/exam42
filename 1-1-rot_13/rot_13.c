#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int c, char **v)
{
	char * ptr;

	if (c == 2)
	{
		ptr = v[1];
		while (*ptr)
		{
			if (*ptr >= 'a' && *ptr <= 'z')
				ft_putchar((*ptr + 13 <= 'z') ? *ptr + 13 : *ptr - 13);
			else if (*ptr >= 'A' && *ptr <= 'Z')
				ft_putchar((*ptr + 13 <= 'Z') ? *ptr + 13 : *ptr - 13);
			else
				ft_putchar(*ptr);
			ptr++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
