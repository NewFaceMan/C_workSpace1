#include <stdio.h>

int main(void)
{
	int x = 10;

	x = x + 1;
	printf("%d\n", x);

	x += 1;
	printf("%d\n", x);

	++x;
	printf("%d\n", x);
	return 0;
}