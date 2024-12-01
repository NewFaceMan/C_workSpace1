#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0, count = 1;
    while (count <= 10)
    {
        sum += count;
        count++;
    }
    printf("Total : %d\n", sum);
    return 0;
}
