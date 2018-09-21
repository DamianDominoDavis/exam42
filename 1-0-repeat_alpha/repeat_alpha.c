#include <unistd.h>

int	main(int c, char **v)
{
	char	*s;
	int		n;

	if (c == 2)
	{
		s = v[1];
		while (*s)
		{
			if (*s >= 'A' && *s <= 'Z')
				n = *s - 'A' + 1;
			else if (*s >= 'a' && *s <= 'z')
				n = *s - 'a' + 1;
			else
				n = 1;
			while (n--)
				write(1, s, 1);
			s++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
