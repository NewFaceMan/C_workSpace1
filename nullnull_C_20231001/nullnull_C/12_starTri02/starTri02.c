#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (i + j >= 4)
				printf("*\t");
			else
				putchar('\t');
		}
		putchar('\n');
	}
	return 0;
}