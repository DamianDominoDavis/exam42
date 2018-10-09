unsigned char	reverse(unsigned char b)
{
	unsigned char r = b; // r will be reversed bits of v; first get LSB of v
	int s = sizeof(b) * 8 - 1; // extra shift needed at end

	b >>= 1;
	while (b)
	{   
	  r <<= 1;
	  r |= b & 1;
	  s--;
	  b >>= 1;
	}
	r <<= s;
	return (r);
}
#include <stdio.h>
int main(void)
{
	for(unsigned char x = 'a'; x <= 'z'; x++)
		printf("%c", (char)reverse(x));
	printf("\n");
}
