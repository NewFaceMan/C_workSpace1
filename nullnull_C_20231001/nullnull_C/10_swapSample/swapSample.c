#include <stdio.h>

int main(void)
{
    int x = 10, y = 20, nTmp = 0;
    printf("Before: %d, %d\n", x, y);

    nTmp = x;
    x = y;
    y = nTmp;

    printf("After: %d, %d\n", x, y);
	return 0;
}