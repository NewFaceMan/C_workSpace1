#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = 0; i < 11; i++)
    {
        sum += i;
    }
    printf("%d부터 %d까지의 합: %d \n",1, 10, sum);
    return 0;
}
