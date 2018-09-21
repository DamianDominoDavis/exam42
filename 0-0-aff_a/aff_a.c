#include <unistd.h>

int	main(int c, char **v)
{
	char	*ptr;

	if (c == 2)
	{
		ptr = v[1];
		while (*ptr && *ptr != 'a')
			ptr++;
		if (*ptr)
			write(1, "a", 1);
	}
	write(1, "\n", 1);
	return (0);
}
