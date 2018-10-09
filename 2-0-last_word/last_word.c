#include <unistd.h>

int	main(int c, char **v)
{
	char *p;
	char *x;

	if (c == 2)
	{
		p = v[1];
		x = p;
		while (*p)
		{
			if (*p != ' ' && *p != '\t' && p > v[1]
				&& (*(p - 1) == ' ' || *(p - 1) == ' '))
				x = p;
			p++;
		}
		while (*x && *x != ' ' && *x != '\t')
			write(1, x++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
