#include <unistd.h>

int	main(void)
{
	char n;

	n = '0' - 1;
	while (++n <= '9')
		write(1, &n, 1);
	write(1, "\n", 1);
	return (0);
}
