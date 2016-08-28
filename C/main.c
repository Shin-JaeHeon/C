#include <stdio.h>
int main(void)
{
	int d[8][8];
	for (int a = 2; a < 10; a++) {
		for (int b = 1; b < 10; b++)
		{
			d[a - 2][b - 1] = a*b;
		}
	}
	for (int a = 0; a < 8; a++) {
		for (int b = 0; b < 8; b++) {
			printf("%d * %d = %d ||", (b + 2), (a + 2), d[b][a]);
		}
		printf("\n");
	}
}