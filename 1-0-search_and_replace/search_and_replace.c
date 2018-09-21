#include <unistd.h>

int	main(int c, char **v)
{
	char *ptr;

	if (c == 4)
	{
		ptr = v[1];
		while (*ptr)
		{
			if (*ptr == v[2][0])
				write(1, v[3], 1);
			else
				write(1, ptr, 1);
			ptr++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
