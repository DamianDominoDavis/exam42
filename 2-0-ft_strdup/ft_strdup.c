#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		n;
	char	*out;

	if (src)
	{
		n = 0;
		while (src[n])
			n++;
		out = (char*)malloc(sizeof(char) * (n + 1));
		out[n] = 0;
		while (--n >= 0)
			out[n] = src[n];
		return (out);
	}
	else
		return ((char*)0);
}
