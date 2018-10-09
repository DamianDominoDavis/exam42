#include <unistd.h>

int	main(int c, char **v)
{
	char	*left;
	char	*right;
	char	*search;
	if (c == 3)
	{
		search = v[1] - 1;
		while (*(++search))
		{
			left = v[1];
			while (*left && left < search && *left != *search)
				left++;
			if (left == search)
				write(1, search, 1);
		}
		search = v[2] - 1;
		while (*(++search))
		{
			left = v[1];
			while (*left && *left != *search)
				left++;
			if (!*left)
			{
				right = v[2];
				while (*right && right < search && *right != *search)
					right++;
				if (right == search)
					write(1, search, 1);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
