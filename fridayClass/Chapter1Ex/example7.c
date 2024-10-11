#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 1;
    while (i < 10)
    {
        printf("8 * %d = %d\n", i, 8 * i);
        i++;
    }
    return 0;
}
