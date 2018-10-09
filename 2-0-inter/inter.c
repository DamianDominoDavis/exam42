#include <unistd.h>

int main(int c, char **v)
{
	char *l;
	char *p;
	char *r;
	
	if (c == 3)
	{
		p = v[1];
		while (*p)
		{
			r = v[2];
			while (*r && *r != *p)
				r++;
			if (*p == *r)
			{
				l = v[1];
				while (l < p && *l != *p)
					l++;
				if (l == p)
					write(1, p, 1);
			}
			p++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
