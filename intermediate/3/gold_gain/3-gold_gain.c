int gold_gain(int **mine, int n) {
	int max = 0, x, y, z;

	if (!mine) return -1;
	for (int c=1; c<n; c++)
		for (int r=0; r<n; r++) {
			x = (r>0)? mine[r-1][c-1]: 0;
			y = mine[r][c-1];
			z = (r<n-1)? mine[r+1][c-1]: 0;
			mine[r][c] += (x>y&&x>z)? x: (y>z)? y: z;
			if (c == n-1 && max <= mine[r][c])
				max = mine[r][c];
		}
	return max;
}

#include <stdlib.h>
#include <stdio.h>

static int **table(int c, char **v) {
	int n, q = 2, **o;

	if (c<3) {
		printf("usage: %s N <n1...N^2>\n", v[0]);
		return 0;
	}
	n = atoi(v[1]);
	if (c != n*n+2) {
		printf("wrong number of ints (%d^2 = %d)\n", n, n*n);
		return 0;
	}
	if ((o = (int**)malloc(sizeof(int*) * n)))
		for (int i=0; i<n; i++) {
			o[i] = malloc(sizeof(int) * n);
			for (int k=0; k<n; k++)
				o[i][k] = atoi(v[q++]);
		}
	return o;
}

int main(int c, char **v) {
	int **mine, n;

	if (!(mine = table(c,v)))
		return 1;
	printf("%d\n", gold_gain(mine, (n=atoi(v[1]))));
	for (int i=0; i<n; i++)
		free(mine[i]);
	free(mine);
	return 0;
}
