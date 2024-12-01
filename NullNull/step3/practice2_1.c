#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("Total : %d\n", sum);
    return 0;
}
